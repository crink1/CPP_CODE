//#include <iostream>
//using namespace std;
//#define N  10 + 20
//int n = 0;
//struct plant
//{
//    int t;
//    int d;
//    int l;
//}p[N];
//
//bool st[N];
//
//
//bool dfs(int i, int time)
//{
//    if (i >= n)
//    {
//        return true;
//    }
//    for (int j = 0; j < n; j++)
//    {
//        if (!st[j])
//        {
//            st[j] = true;
//            if (p[j].t + p[j].d < time)
//            {
//                st[j] = false;
//                return false;
//            }
//            int t = max(time, p[j].t) + p[j].l;
//            if (dfs(i + 1, t))
//            {
//                return true;
//            }
//            st[j] = false;
//        }
//
//    }
//    return false;
//
//
//}
//void solve()
//{
//
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> p[i].t >> p[i].d >> p[i].l;
//    }
//
//    if (dfs(0, 0))
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        st[i] = false;
//    }
//}
//
//int main()
//{
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        solve();
//    }
//    return 0;
//}
//#include <bits/stdc++.h>
//#define int long long
//#define endl '\n'
//#define INF 0x3f3f3f3f
//using namespace std;
//
//void solve()
//{
//  
//}
//
//signed main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t = 1;
//    while (t--)
//    {
//        solve();
//    }
//    return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//int n = 0;
//vector<int> a, b;
//
//int main()
//{
//    cin >> n;
//    a.resize(n);
//    b.resize(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i] >> b[i];
//    }
//    for (int i = 1; i <= 1e6; i++)
//    {
//        int flag = 1;
//        for (int j = 0; j < n; j++)
//        {
//            if (b[j] != (a[j] / i))
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (1 == flag)
//        {
//            cout << i << endl;
//            break;
//        }
//    }
//   
//    for (int i = 1e6; i >= 1; i--)
//    {
//        int flag = 1;
//        for (int j = 0; j < n; j++)
//        {
//            if (b[j] != (a[j] / i))
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (1 == flag)
//        {
//            cout << i << endl;
//            break;
//        }
//    }
//    return 0;
//}