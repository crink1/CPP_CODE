//template<class T>
//
//class UnionFindSet
//{
//public:
//	UnionFindSet(size_t n)
//		:_ufs(n, -1)
//	{}
//
//	void Union(int x1, int x2)
//	{
//		int root1 = findroot(x1);
//		int root2 = findroot(x2);
//		if (root1 == root2)
//		{
//			return;
//		}
//		_ufs[root1] += _ufs[root2];
//		_ufs[root2] = root1;
//
//
//	}
//
//	int findroot(int x)
//	{
//		int root = x;
//		while (_ufs[root] >= 0)
//		{
//			root = _ufs[root];
//		}
//		return root;
//	}
//
//	bool inset(int x1, int x2)
//	{
//		return findroot(x1) == findroot(x2);
//	}
//
//	size_t setsize()
//	{
//		int size = 0;
//		for (int i = 0; i < _ufs.size(); i++)
//		{
//			if (_ufs[i] < 0)
//			{
//				size++;
//			}
//		}
//		return size;
//	}
//
//private:
//	vector<T> _ufs;
//};
//
//class Solution {
//public:
//	int findCircleNum(vector<vector<int>>& isConnected) {
//		UnionFindSet<int> ufs(isConnected.size());
//		for (size_t i = 0; i < isConnected.size(); i++)
//		{
//			for (size_t j = 0; j < isConnected[i].size(); j++)
//			{
//				if (isConnected[i][j] == 1)
//				{
//					ufs.Union(i, j);
//				}
//			}
//		}
//		return ufs.setsize();
//	}
//};


//class Solution {
//public:
//    int findCircleNum(vector<vector<int>>& isConnected) {
//        vector<int> ufs(isConnected.size(), -1);
//        auto findroot = [&ufs](int x)
//            {
//                int root = x;
//                while (ufs[root] >= 0)
//                {
//                    root = ufs[root];
//                }
//                return root;
//            };
//
//        for (size_t i = 0; i < isConnected.size(); i++)
//        {
//            for (size_t j = 0; j < isConnected[i].size(); j++)
//            {
//                if (isConnected[i][j] == 1)
//                {
//                    int root1 = findroot(i);
//                    int root2 = findroot(j);
//                    if (root1 != root2)
//                    {
//                        ufs[root1] += ufs[root2];
//                        ufs[root2] = root1;
//                    }
//
//                }
//            }
//        }
//
//        int ret = 0;
//        for (int i = 0; i < ufs.size(); i++)
//        {
//            if (ufs[i] < 0)
//            {
//                ret++;
//            }
//        }
//        return ret;
//    }
//};