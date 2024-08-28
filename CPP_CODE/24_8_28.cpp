//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    int ret = 0;
//    int left = 0;
//    int right = 1;
//    vector<int> v(n);
//    for (auto& i : v)
//    {
//        cin >> i;
//    }
//    while (right < n)
//    {
//        if (v[right] - v[right - 1] > 8)
//        {
//            left = right;
//        }
//        ret = max(ret, right - left + 1);
//        right++;
//    }
//    cout << ret;
//}
//// 64 位输出请用 printf("%lld")
//
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param CityMap int整型vector<vector<>>
//     * @param n int整型
//     * @param m int整型
//     * @return int整型
//     */
//
//    pair<int, int> find(vector<vector<int> >& CityMap, int n, int m)
//    {
//
//        return{ 0, 0 };
//    }
//
//    int countPath(vector<vector<int> >& CityMap, int n, int m) {
//        // write code here
//
//        int dx[4] = { 0,0,1,-1 };
//        int dy[4] = { 1,-1,0,0 };
//        int ret = 0;
//
//        queue<pair<int, int>> q;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (CityMap[i][j] == 1)
//                {
//                    q.push({ i, j });
//                }
//            }
//        }
//
//
//        while (!q.empty())
//        {
//            int s = q.size();
//            for (int i = 0; i < s; i++)
//            {
//                pair<int, int> t = q.front();
//                q.pop();
//                if (CityMap[t.first][t.second] == 2)
//                {
//                    ret++;
//                    continue;
//                }
//                CityMap[t.first][t.second] = -1;
//                for (int k = 0; k < 4; k++)
//                {
//                    int x = t.first;
//                    int y = t.second;
//                    x += dx[k];
//                    y += dy[k];
//                    if (x >= 0 && x < n && y >= 0 && y < m && CityMap[x][y] != -1)
//                    {
//                        q.push({ x, y });
//
//                    }
//                }
//            }
//            if (ret != 0)
//            {
//                break;
//            }
//
//        }
//        return ret;
//
//    }
//};