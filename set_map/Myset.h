#pragma once
#include"RBTree.h"
namespace crin
{
	template<class K>
	class set
	{
	public:
		struct SetKeyOfT
		{
			const K& operator()(const K& k)
			{
				return k;
			}
		};
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator iterator;
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator const_iterator;

		iterator begin() const
		{
			return _t.begin();
		}

		iterator end() const
		{
			return _t.end();
		}
		
		pair<iterator,bool> insert(const K& k)
		{
			return _t.Insert(k);
		}
	private:
		RBTree<K, K,SetKeyOfT> _t;
	};
}