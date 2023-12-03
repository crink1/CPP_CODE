#pragma once
#include"Hash_Table.h"


namespace crin
{
	template<class K,class V, class hash = HashFunc<K>>
	class unordered_map
	{
		struct MapKofT
		{
			const K& operator()(const pair<K,V>& kv)
			{
				return kv.first;
			}
		};
	public:

		typedef typename HashTable<K, pair<const K, V>, MapKofT,hash>::iterator iterator;
		


		iterator begin()
		{
			return _ht.begin();
		}

		iterator end()
		{
			return _ht.end();
		}
		

		pair<iterator, bool> insert(const pair<K,V>& kv)
		{
			return _ht.insert(kv);
		}
		
		V& operator[](const K& key)
		{
			pair<iterator, bool> ret = _ht.insert(make_pair(key, V()));
			return ret.first->second;
		}

	private:
		HashTable<K, pair<const K, V>,MapKofT,hash> _ht;

	};
}