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
namespace crin_open_addres
{
	enum status
	{
		EXIST,
		EMPTY,
		DELETE
	};


	template<class K,class V>
	struct HashData
	{
		HashData()
			:_s(EMPTY)
		{}
		pair<K, V> _kv;
		status _s;
	};

	


	template<class K, class V,class Hash = HashFunc<K>>
	class HashTable
	{
		
		typedef HashData<K, V> HashData;
	public:
		HashTable()
			:_n(0)
		{
			_table.resize(10);
		}
		bool insert(const pair<K,V>& kv)
		{
			if (Find(kv.first))
			{
				return false;
			}

			
			if (_n * 10 / _table.size() >= 7)
			{
				HashTable<K,V> newt;
				newt._table.resize(_table.size() * 2);
				for (int i = 0; i < _table.size(); i++)
				{
					if (_table[i]._s == EXIST)
					{
						newt.insert(_table[i]._kv);
					}
				}
				_table.swap(newt._table);
			}

			Hash hf;
			size_t hashi = hf(kv.first) % _table.size();
			while(_table[hashi]._s == EXIST )
			{
				hashi++;
				hashi = hashi % _table.size();
			}

			_table[hashi]._kv = kv;

			_table[hashi]._s = EXIST;
			_n++;

			return true;

		}

		HashData* Find(const K& key)
		{
			Hash hf;
			size_t hashi = hf(key) % _table.size();
			while (_table[hashi]._s != EMPTY)
			{
				if (_table[hashi]._s == EXIST && key == _table[hashi]._kv.first)
				{
					return &_table[hashi];
				}
				hashi++;
				hashi = hashi % _table.size();
			}
			return nullptr;
		}

		bool Erase(const K& key)
		{
			HashData* ret = Find(key);
			if (ret)
			{
				ret->_s = DELETE;
				--_n;
				return true;
			}
			return false;
		}
		const size_t size() 
		{
			return _n;
		}

		bool empty()
		{
			return _n == 0;
		}

		void Print()
		{
			for (int i = 0; i < _table.size(); i++)
			{
				if (_table[i]._s == EXIST)
				{
					
					cout << "[" << i << "]->" << _table[i]._kv.first << ":" << _table[i]._kv.second << endl;
				}
				else if (_table[i]._s == EMPTY)
				{
					printf("[%d]->\n", i);
				}
				else
				{
					printf("[%d]->D\n", i);
				}
			}

			cout << endl;
		}

	private:
		vector<HashData> _table;
		size_t _n;
	};
}

namespace crin_HB
{
	template<class K,class V>
	struct HashNode
	{
		HashNode* next;
		pair<K, V> _kv;
		HashNode(const pair<K, V>& kv)
			:next(nullptr)
			,_kv(kv)
		{}
	};

	template<class K,class V, class hash = HashFunc<K>>
	class HashTable
	{
		typedef HashNode<K, V> Node;
	public:
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
		bool insert(const pair<K,V>& kv)
		{

			if (find(kv.first))
			{
				return false;
			}
			hash hf;
			if (_n == _tables.size())
			{
				
				/*size_t newsize = _tables.size() * 2;
				HashTable newhash;
				newhash._tables.resize(newsize);
				for (int i = 0; i < _tables.size(); i++)
				{
					Node* cur = _tables[i];
					while (cur)
					{
						newhash.insert(cur->_kv);
						cur = cur->next;
					}
				}
				_tables.swap(newhash._tables);*/
				vector<Node*> newtable;
				newtable.resize(_tables.size() * 2, nullptr);
				for (int i = 0; i < _tables.size(); i++)
				{
					Node* cur = _tables[i];
					while (cur)
					{
						Node* next = cur->next;
						size_t s = hf(cur->_kv.first) % newtable.size();
						cur->next = newtable[i];
						newtable[i] = cur;
						cur = next;
					}
					_tables[i] = nullptr;
				}
				_tables.swap(newtable);
			}

			size_t hashi = hf(kv.first) % _tables.size();

			Node* newnode = new Node(kv);

			newnode->next = _tables[hashi];
			_tables[hashi] = newnode;
			++_n;
			return true;
			
		}

		Node* find(const K& key) 
		{
			hash hf;
			size_t hashi = hf(key) % _tables.size();
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (cur->_kv.first == key)
				{
					return cur;
				}
				cur = cur->next;
			}
			return nullptr;
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
}