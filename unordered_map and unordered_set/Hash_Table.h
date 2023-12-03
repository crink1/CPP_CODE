#pragma once

#include<vector>


template<class T>
struct HashFunc
{
	size_t operator()(const T& data)
	{
		return (size_t)data;
	}
};

template<>
struct HashFunc<string>
{
	size_t operator()(const string& data)
	{
		int sum = 0;
		for (auto& i : data)
		{
			sum += i;
		}
		return sum * 31;

	}
};

template<class T>
struct HashNode
{
	HashNode* next;
	T _data;
	HashNode(const T& data)
		:next(nullptr)
		, _data(data)
	{}
};



template<class K, class T, class KofT, class hash>
class HashTable;

template<class K, class T, class Ref, class Ptr, class KofT, class hash >
struct __HTIterator
{
	typedef __HTIterator<K, T, Ref, Ptr, KofT, hash> self;
	typedef HashNode<T> node;
	node* _node;
	const HashTable<K, T, KofT, hash>* _pht;
	size_t _hashi;


	__HTIterator(node* node, HashTable<K, T, KofT, hash>* pht,size_t hashi)
		:_node(node)
		,_pht(pht)
		,_hashi(hashi)
	{}
	__HTIterator(node* node, const HashTable<K, T, KofT, hash>* pht, size_t hashi)
		:_node(node)
		, _pht(pht)
		, _hashi(hashi)
	{}
	self& operator++()
	{
		if (_node->next)
		{
			_node = _node->next;
		}
		else
		{
			++_hashi;
			while (_hashi < _pht->_tables.size())
			{
				if (_pht->_tables[_hashi])
				{
					_node = _pht->_tables[_hashi];
					break;
				}
				_hashi++;
			}
			if (_hashi == _pht->_tables.size())
			{
				_node = nullptr;
			}
		}
		return *this;
	}
	Ref operator*()
	{
		return _node->_data;
	}

	Ptr operator->()
	{
		return &_node->_data;
	}

	bool operator!=(const self& s)
	{
		return s._node != _node;
	}
};



	

	template<class K,class T, class KofT, class hash>
	class HashTable
	{
		typedef HashNode<T> Node;
		template<class K, class T, class Ref, class Ptr, class KofT, class hash>
		friend struct __HTIterator;

	public:
		typedef __HTIterator<K, T,T&, T*, KofT, hash> iterator;
		typedef __HTIterator<K, T, const T&, const T*, KofT, hash> const_iterator;


		iterator begin()
		{
			for (int i = 0; i < _tables.size(); i++)
			{
				if (_tables[i])
				{
					return iterator(_tables[i], this, i);
				}
			}
			return end();
		}

		iterator end()
		{
			return iterator(nullptr, this, -1);
		}

		const_iterator begin() const
		{
			for (int i = 0; i < _tables.size(); i++)
			{
				if (_tables[i])
				{
					return const_iterator(_tables[i], this, i);
				}
			}
			return end();
		}
		const_iterator end() const
		{
			return const_iterator(nullptr, this, -1);
		}

		HashTable()
		{
			_tables.resize(10);
		}
		~HashTable()
		{
			for (int i = 0; i < _tables.size(); i++)
			{
				Node* cur = _tables[i];
				while (cur)
				{
					Node* next = cur->next;
					delete cur;
					cur = next;
				}
				_tables[i] = nullptr;
			}
		}
		pair<iterator,bool> insert(const T& data)
		{
			KofT kot;

			iterator it = find(kot(data));
			if (it != end())
			{
				return make_pair(it,false);
			}
			hash hf;
			
			if (_n == _tables.size())
			{
				
				vector<Node*> newtable;
				newtable.resize(_tables.size() * 2, nullptr);
				for (int i = 0; i < _tables.size(); i++)
				{
					Node* cur = _tables[i];
					while (cur)
					{
						Node* next = cur->next;
						size_t s = hf(kot(cur->_data)) % newtable.size();
						cur->next = newtable[i];
						newtable[i] = cur;
						cur = next;
					}
					_tables[i] = nullptr;
				}
				_tables.swap(newtable);
			}

			size_t hashi = hf(kot(data)) % _tables.size();

			Node* newnode = new Node(data);

			newnode->next = _tables[hashi];
			_tables[hashi] = newnode;
			++_n;
			return make_pair(iterator(newnode,this,hashi), true);
			
		}

		iterator find(const K& key) 
		{
			hash hf;
			KofT kot;
			size_t hashi = hf(key) % _tables.size();
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (kot(cur->_data) == key)
				{
					return iterator(cur,this,hashi);
				}
				cur = cur->next;
			}
			return end();
		}
		bool erase(const K& key)
		{
			hash hf;
			size_t hashi = hf(key) % _tables.size();
			Node* prev = nullptr;
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (cur->_kv.first == key)
				{
					if (prev == nullptr)
					{
						_tables[hashi] = cur->next;
					}
					else
					{
						prev->next = cur->next;

					}
					delete cur;

					return true;
				}
				prev = cur;
				cur = cur->next;
			}
			return false;
			
		}
		void Some()
		{
			size_t bucketSize = 0;
			size_t maxBucketLen = 0;
			size_t sum = 0;
			double averageBucketLen = 0;

			for (size_t i = 0; i < _tables.size(); i++)
			{
				Node* cur = _tables[i];
				if (cur)
				{
					++bucketSize;
				}

				size_t bucketLen = 0;
				while (cur)
				{
					++bucketLen;
					cur = cur->next;
				}

				sum += bucketLen;

				if (bucketLen > maxBucketLen)
				{
					maxBucketLen = bucketLen;
				}
			}

			averageBucketLen = (double)sum / (double)bucketSize;

			printf("all bucketSize:%d\n", _tables.size());
			printf("bucketSize:%d\n", bucketSize);
			printf("maxBucketLen:%d\n", maxBucketLen);
			printf("averageBucketLen:%lf\n\n", averageBucketLen);
		}
	private:
		vector<Node*> _tables;
		size_t _n = 0;
	};
