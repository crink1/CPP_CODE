//#include<iostream>
//
//typedef int 👌;
//
//int main()
//{
//	👌 😊 = 1;
//	👌 😭 = 2;
//	std::swap(😭, 😊);
//	std::cout << 😊 << std::endl;
//	std::cout << 😭 << std::endl;
//
//
//	return 0;
//}
//#include <iostream>
//
//using 🍴 = int;
//using 🔷 = double;
//
//struct 🏠
//{
//    🍴 😏(🍴 🍺, 🍴 🥩)
//    {
//        return 🍺 + 🥩;
//    }
//};
//
//int main()
//{
//    🏠 🏨;
//    std::cout << 🏨.😏(1, 2) << '\n';
//
//    constexpr 🔷 🥧 = 3.1415927;
//    🔷 r = 5;
//    🔷 🔵 = 🥧 * r * r;
//
//    std::cout << 🔵 << '\n';
//}


//class Solution {
//public:
//    int ret = 0;
//    bool vis[21][21] = { false };
//    int m = 0;
//    int n = 0;
//    int count = 0;
//    void dfs(vector<vector<int>>& grid, int i, int j, int c)
//    {
//        if (grid[i][j] == 2)
//        {
//            if (c == count + 2)
//                ret++;
//            return;
//        }
//        int dy[4] = { -1,1,0,0 };
//        int dx[4] = { 0,0,-1,1 };
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y] && grid[x][y] != -1)
//            {
//                vis[x][y] = true;
//                dfs(grid, x, y, c + 1);
//                vis[x][y] = false;
//
//            }
//        }
//
//    }
//
//    int uniquePathsIII(vector<vector<int>>& grid) {
//        m = grid.size();
//        n = grid[0].size();
//        int x, y;
//        for (int i = 0; i < grid.size(); i++)
//        {
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                if (grid[i][j] == 1)
//                {
//                    x = i;
//                    y = j;
//                }
//                if (grid[i][j] == 0)
//                {
//                    count++;
//                }
//            }
//        }
//        vis[x][y] = true;
//        dfs(grid, x, y, 1);
//        return ret;
//    }
//};

//class Solution {
//public:
//    int tribonacci(int n) {
//        if (n == 0)
//        {
//            return 0;
//        }
//        if (n == 1 || n == 2)
//        {
//            return 1;
//        }
//        vector<int> dp(n + 1);
//        dp[0] = 0;
//        dp[1] = dp[2] = 1;
//
//        for (int i = 3; i <= n; i++)
//        {
//            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//        }
//
//
//        return dp[n];
//    }
//};