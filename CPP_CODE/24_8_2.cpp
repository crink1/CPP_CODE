//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param m int����vector<vector<>>
//     * @return int����
//     */
//
//    void dfs(vector<vector<int> >& m, int i)
//    {
//        for (int j = 0; j < m.size(); j++)
//        {
//            if (m[i][j] == 1)
//            {
//
//                m[i][j] = 0;
//                m[j][i] = 0;
//                dfs(m, j);
//
//            }
//        }
//    }
//    int citys(vector<vector<int> >& m) {
//        // write code here
//        int cnt = 0;
//
//        for (int i = 0; i < m.size(); i++)
//        {
//            for (int j = 0; j < m[0].size(); j++)
//            {
//                if (m[i][j] == 1)
//                {
//                    cnt++;
//                    m[i][j] = 0;
//                    m[j][i] = 0;
//                    dfs(m, i);
//                    dfs(m, j);
//
//                }
//            }
//        }
//        return cnt;
//    }
//};
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//
//    set<string> st;
//    string s;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> s;
//        sort(s.begin(), s.end());
//        st.insert(s);
//    }
//    cout << st.size();
//
//}
//// 64 λ������� printf("%lld")
//
//
//
//#include <iostream>
//using namespace std;
//#define int long long
//
//void sol()
//{
//    int h = 0, a = 0, H = 0, A = 0;
//    cin >> h >> a >> H >> A;
//    if (H - a <= 0)
//    {
//        cout << -1 << endl;;
//        return;
//    }
//
//    int n = H / a + (H % a != 0 ? 1 : 0);
//
//    int d = n - 1;
//
//    int x = d * A;
//
//    cout << h / x - (h % x == 0 ? 1 : 0) << endl;
//
//
//}
//
//signed main() {
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        sol();
//    }
//    return 0;
//}
//// 64 λ������� printf("%lld")