#pragma once
#include"RBTree.h"

namespace crin
{
	template<class K,class T>
	class map
	{
	public:

	private:
		RBTree<K, pair<K,T>> _t;
	};
}
