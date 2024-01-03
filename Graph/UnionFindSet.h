#pragma once



template<class T>

class UnionFindSet
{
public:
	UnionFindSet(size_t n)
		:_ufs(n,-1)
	{}

	void Union(int x1, int x2)
	{
		int root1 = findroot(x1);
		int root2 = findroot(x2);
		if (root1 == root2)
		{
			return ;
		}

		if (abs(_ufs[root1]) < abs(_ufs[root2]))
		{
			swap(root1, root2);
		}
		_ufs[root1] += _ufs[root2];
		_ufs[root2] = root1;
	}

	int findroot(int x)
	{
		int root = x;
		while (_ufs[root] >= 0)
		{
			root = _ufs[root];
		}
		// ·��ѹ��
		while (_ufs[x] >= 0)
		{
			int parent = _ufs[x];
			_ufs[x] = root;
			x = parent;
		}
		return root;
	}

	bool inset(int x1, int x2)
	{
		return findroot(x1) == findroot(x2);
	}

	size_t setsize()
	{
		int size = 0;
		for (int i = 0; i < _ufs.size(); i++)
		{
			if (_ufs[i] < 0)
			{
				size++;
			}
		}
		return size;
	}

private:
	vector<T> _ufs;
};