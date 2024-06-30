
//#include <iostream>
//using namespace std;
//template <typename T>
//T add(T a, T b)
//{
//	return a + b;
//}
//
//
//int main()
//{
//	cout << add(2, 3) << endl;
//	cout << add(2.6, 3.7) << endl;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ll n, d, ans;
//ll v[100005], a[100005], dp[100005], pm[100005], w[100005];
//int main() {
//
//	cin >> n >> d;
//	pm[0] = 1e18;
//	for (int i = 1; i < n; i++) cin >> v[i];
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		pm[i] = min(pm[i - 1], a[i]);
//	}
//	for (int i = 2; i <= n; i++) {
//		dp[i] = dp[i - 1] + ceil(1.0 * (v[i - 1] - w[i - 1]) / d) * pm[i - 1];
//		w[i] = ceil(1.0 * (v[i - 1] - w[i - 1]) / d) * d - (v[i - 1] - w[i - 1]);
//	}
//	cout << dp[n];
//	return 0;
//}
//
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() 
//{
//    int n, d;
//    long long ret = 0;
//    long long mprice;
//    vector<long long> v(100001);
//    vector<long long> prices(100001);
//    vector<long long> r(100001);
//    cin >> n >> d;
//    for (int i = 2; i <= n; i++) 
//    {
//        cin >> v[i];
//        v[i] += v[i - 1];
//        r[i] = ceil(1.0 * v[i] / d);
//    }
//    for (int i = 1; i <= n; i++) 
//    {
//        cin >> prices[i];
//    }
//    mprice = prices[1];
//    for (int i = 2; i <= n; i++) 
//    {
//        ret += mprice * (r[i] - r[i - 1]);
//        mprice = min(mprice, prices[i]);
//    }
//    cout << ret;
//    return 0;
//}
//


//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//vector<int> parent, size;
//
//
//void init(int n) 
//{
//    parent.resize(n);
//    size.resize(n, 1);
//    for (int i = 0; i < n; ++i) 
//    {
//        parent[i] = i;
//    }
//}
//
//
//int find(int x) {
//    if (x != parent[x]) 
//    {
//        parent[x] = find(parent[x]);
//    }
//    return parent[x];
//}
//
//// °´ÖÈºÏ²¢
//void unite(int x, int y) {
//    int rootX = find(x);
//    int rootY = find(y);
//    if (rootX != rootY) 
//    {
//        if (size[rootX] < size[rootY]) 
//        {
//            swap(rootX, rootY);
//        }
//        parent[rootY] = rootX;
//        size[rootX] += size[rootY];
//    }
//}
//
//int catalan(int n) 
//{
//    if (n == 0) return 1;
//    long long res = 1;
//    for (int i = 0; i < n; ++i) 
//    {
//        res = res * (4 * i + 2) / (i + 2);
//    }
//    return res % MOD;
//}
//
//int main() {
//    int n, q;
//    cin >> n >> q;
//    init(n);
//
//    long long ans = 0;
//    for (int i = 0; i < q; ++i) 
//    {
//        int type;
//        cin >> type;
//        if (type == 1) 
//        {
//            int x, y;
//            cin >> x >> y;
//            x = (x + ans) % n;
//            y = (y + ans) % n;
//            unite(x, y);
//        }
//        else if (type == 2) 
//        {
//            int x;
//            cin >> x;
//            x = (x + ans) % n;
//            int root = find(x);
//            int treeSize = size[root];
//            ans = catalan(treeSize - 1);
//            cout << ans << endl;
//        }
//    }
//
//    return 0;
//}
