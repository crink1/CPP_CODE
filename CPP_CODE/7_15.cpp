//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int t = 0;
//    int arr[6] = { 0 };
//    int flag = 0;
//    cin >> t;
//    while (t--)
//    {
//        for (int i = 0; i < 6; i++)
//        {
//            cin >> arr[i];
//        }
//        sort(arr, arr + 6);
//
//        do
//        {
//            if (arr[0] + arr[1] > arr[2] && arr[1] + arr[2] > arr[0] && arr[0] + arr[2] > arr[1] && \
//                arr[3] + arr[4] > arr[5] && arr[3] + arr[5] > arr[4] && arr[4] + arr[5] > arr[3])
//            {
//                flag = 1;
//                break;
//            }
//        } while (next_permutation(arr, arr + 6));
//
//        if (flag == 1)
//        {
//            cout << "Yes" << endl;
//        }
//        else {
//            cout << "No" << endl;
//        }
//        flag = 0;
//
//    }
//    return 0;
//}
//// 64 位输出请用 printf("%lld")
//
//
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 判断岛屿数量
//     * @param grid char字符型vector<vector<>>
//     * @return int整型
//     */
//    int dx[4] = { 0,0,-1,1 };
//    int dy[4] = { -1,1,0,0 };
//    bool vis[201][201] = { false };
//    int m, n;
//
//    void dfs(vector<vector<char> >& grid, int i, int j)
//    {
//        for (int k = 0; k < 4; k++)
//        {
//            int x = dx[k] + i;
//            int y = dy[k] + j;
//            if (x >= 0 && x < m && y >= 0 && y < n && vis[x][y] == false && grid[x][y] == '1')
//            {
//                vis[x][y] = true;
//                dfs(grid, x, y);
//            }
//        }
//    }
//
//    int solve(vector<vector<char> >& grid)
//    {
//        // write code here
//        m = grid.size();
//        n = grid[0].size();
//        int ret = 0;
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (grid[i][j] == '1' && vis[i][j] == false)
//                {
//                    ret++;
//                    vis[i][j] = true;
//                    dfs(grid, i, j);
//                }
//            }
//        }
//        return ret;
//
//    }
//};
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    int rleft = 0;
//    int rright = 0;
//    int left = 0;
//    int right = 0;
//    while (right < s.size())
//    {
//        if (s[right] >= '0' && s[right] <= '9')
//        {
//            left = right;
//            while (right < s.size() && s[right] >= '0' && s[right] <= '9')
//            {
//                right++;
//            }
//            if ((right - left) > (rright - rleft))
//            {
//                rleft = left;
//                rright = right;
//            }
//            left = right;
//        }
//        right++;
//    }
//    cout << s.substr(rleft, rright - rleft);
//}
//// 64 位输出请用 printf("%lld")