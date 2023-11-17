#pragma once
#include"RBTree.h"

namespace crin
{
	template<class K,class V>
	class map
	{
	public:
		struct MapKeyOfT
		{
			const K& operator()(const pair<K,V>& kv)
			{
				return kv.first;
			}
		};

		V& operator[](const K& k)
		{
			pair<iterator, bool> ret = insert(make_pair(k, V()));
			return ret.first->second;
		}


		typedef typename RBTree<K, pair<const K, V>, MapKeyOfT>::iterator iterator;
		typedef typename RBTree<K, pair<const K, V>, MapKeyOfT>::const_iterator const_iterator;

		iterator begin()
		{
			return _t.begin();
		}

		iterator end()
		{
			return _t.end();
		}

		const_iterator begin() const
		{
			return _t.begin();
		}

		const_iterator end() const
		{
			return _t.end();
		}

		pair<iterator,bool> insert(const pair<K, V>& kv)
		{
			return _t.Insert(kv);
		}
	private:
		RBTree<K, pair<const K,V>,MapKeyOfT> _t;
	};
}
