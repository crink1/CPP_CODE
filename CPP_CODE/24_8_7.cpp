//#include <set>
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     * ����ɹ��ٰ���Ҫ������������
//     * @param n int���� ��n���
//     * @param startEnd int����vector<vector<>> startEnd[i][0]���ڱ�ʾ��i����Ŀ�ʼʱ�䣬startEnd[i][1]��ʾ��i����Ľ���ʱ��
//     * @return int����
//     */
//    int minmumNumberOfHost(int n, vector<vector<int> >& startEnd) {
//        // write code here
//        sort(startEnd.begin(), startEnd.end(), [](vector<int>& x, vector<int>& y) {
//            return x[0] < y[0];
//            });
//        int ret = 0;
//        multiset<int> et;
//        for (int i = 0; i < n; i++)
//        {
//            if (startEnd[i][0] >= *et.begin())
//            {
//                et.erase(*et.begin());
//            }
//            et.insert(startEnd[i][1]);
//            if (et.size() > ret)
//            {
//                ret = et.size();
//            }
//        }
//        return ret;
//    }
//};
//
//#include <cstring>
//#include <iostream>
//#include <utility>
//#include <vector>
//#include <climits>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//int n, m;
//int x1, y1, x2, y2;
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { -1,1,0,0 };
//int f[1001][1001];
//bool vis[1001][1001];
//
//int ret = INT_MAX;
//
//void bfs(vector<vector<char>>& vv)
//{
//    memset(f, -1, sizeof f);
//    memset(vis, 0, sizeof vis);
//    vis[x1][y1] = true;
//
//
//    queue<pair<int, int>> q;
//    q.push(make_pair(x1, y1));
//    while (!q.empty())
//    {
//        pair<int, int> tmp = q.front();
//        q.pop();
//
//        for (int k = 0; k < 4; k++)
//        {
//            int x = tmp.first + dx[k];
//            int y = tmp.second + dy[k];
//            if (x >= 1 && x <= n && y >= 1 && y <= m && vis[x][y] == false && vv[x][y] == '.')
//            {
//                vis[x][y] = true;
//                f[x][y] = f[tmp.first][tmp.second] + 1;
//                q.push({ x, y });
//            }
//        }
//    }
//    ret = f[x2][y2] + 1;
//}
//
//
//int main() {
//
//    cin >> n >> m;
//
//    cin >> x1 >> y1 >> x2 >> y2;
//    vector<vector<char>> vv(n + 1, vector<char>(m + 1));
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> vv[i][j];
//        }
//    }
//    bfs(vv);
//
//    cout << (ret == 0 ? -1 : ret) << endl;
//
//
//}
//// 64 λ������� printf("%lld")
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    int i = n % 109;
//    while (m > 1)
//    {
//        i = i * (n - 1) % 109;
//        m--;
//    }
//    cout << i;
//}
//// 64 λ������� printf("%lld")