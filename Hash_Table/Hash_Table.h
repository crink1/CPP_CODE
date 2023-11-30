#pragma once
#include<vector>
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

	template<class K,class V>
	class HashTable
	{
		typedef HashNode<K, V> Node;
	public:
		HashTable()
		{
			_tables.resize(10);
		}
		bool insert(const pair<K,V>& kv)
		{

		}
	private:
		vector<Node*> _tables;
		size_t _n = 0;
	};
}