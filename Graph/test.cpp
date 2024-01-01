#include<iostream>
#include<vector>
#include<map>
using namespace std;
#include"UnionFindSet.h"


class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        UnionFindSet<int> ufs(isConnected.size());
        for (size_t i = 0; i < isConnected.size(); i++)
        {
            for (size_t j = 0; j < isConnected[i].size(); j++)
            {
                if (isConnected[i][j] == 1)
                {
                    ufs.Union(i, j);
                }
            }
        }
        return ufs.setsize();
    }
};

int main()
{
    Solution s;
    vector<vector<int>> a = { {1, 1, 0},{1, 1, 0},{0, 0, 1} };
   int ret =  s.findCircleNum(a);
   cout<<ret<<endl;
	return 0;
}