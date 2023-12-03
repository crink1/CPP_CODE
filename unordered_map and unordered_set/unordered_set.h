#pragma once
#include"Hash_Table.h"

namespace crin
{
	template<class K,class hash = HashFunc<K>>
	class unordered_set
	{
		struct SetKofT
		{
			const K& operator()(const K& key)
			{
				return key;
			}
		};
	public:

		typedef typename HashTable<K, K, SetKofT,hash>::const_iterator iterator;
		typedef typename HashTable<K, K, SetKofT, hash>::const_iterator const_iterator;


		/*iterator begin()
		{
			return _ht.begin();
		}

		iterator end()
		{
			return _ht.end();
		}*/
		const_iterator begin() const
		{
			return _ht.begin();
		}

		const_iterator end() const
		{
			return _ht.end();
		}

		pair<const_iterator,bool> insert(const K& key)
		{
			auto ret =  _ht.insert(key);
			return pair<const_iterator, bool>(iterator(ret.first._node,ret.first._pht,ret.first._hashi),ret.second);
			
		}

	private:
		HashTable<K, K,SetKofT,hash> _ht;
	};
}