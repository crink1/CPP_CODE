//#include <climits>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define int long long
//using namespace std;
//
//signed main() {
//    int n = 0;
//    int x = 0;
//    int ret = LONG_LONG_MAX;
//    cin >> n >> x;
//
//    vector<int> v(n + 1, 0);
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> v[i];
//    }
//    sort(v.begin(), v.end());
//    vector<int> ps(n + 1, 0);
//    for (int i = 1; i <= n; i++)
//    {
//        ps[i] = ps[i - 1] + v[i];
//    }
//    for (int i = 0; i <= n; i++)
//    {
//        ret = min(ret, v[i] * x + ps[n] - ps[i] - (n - i) * v[i]);
//    }
//    cout << ret;
//
//
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <unordered_set>
//#define int long long
//using namespace std;
//
//unordered_set<int> row;
//unordered_set<int> col;
//unordered_set<int> dig1;
//unordered_set<int> dig2;
//int ret = 1e5 + 10;
//
//signed main() {
//    int k = 0;
//    cin >> k;
//    int x, y;
//    for (int i = 0; i < k; i++)
//    {
//        cin >> x >> y;
//        if (ret != 1e5 + 10)
//        {
//            continue;
//        }
//        if (row.count(y) || col.count(x) || dig1.count(y - x) || dig2.count(y + x))
//        {
//            ret = i;
//        }
//        row.insert(y);
//        col.insert(x);
//        dig1.insert(y - x);
//        dig2.insert(y + x);
//
//    }
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int in = 0;
//        cin >> in;
//        if (in > ret)
//        {
//            cout << "Yes" << endl;
//
//        }
//        else {
//            cout << "No" << endl;
//        }
//    }
//}
//// 64 位输出请用 printf("%lld")