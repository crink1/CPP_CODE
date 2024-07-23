//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> v(10001);
//    for (int i = 0; i < n; i++)
//    {
//        int x = 0;
//        cin >> x;
//        v[x] += x;
//    }
//    v[1] = max(v[0], v[1]);
//    for (int i = 2; i < 10001; i++)
//    {
//        v[i] += v[i - 2];
//        v[i] = max(v[i], v[i - 1]);
//    }
//
//    cout << v[10000] << endl;
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//
//    vector<int> a;
//    a.resize(3 * n);
//    for (int i = 0; i < 3 * n; i++)
//    {
//        cin >> a[i];
//    }
//
//    sort(a.begin(), a.end());
//
//    long long s = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        s += a[a.size() - 2 * i];
//    }
//    cout << s << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main() {
//    string s1, s2;
//    cin >> s1 >> s2;
//
//    unordered_map<char, int> hash;
//    for (auto& i : s1)
//    {
//        hash[i]++;
//    }
//    for (auto& i : s2)
//    {
//        hash[i]--;
//        if (hash[i] < 0)
//        {
//            cout << "No" << endl;
//            return 0;
//        }
//    }
//
//    cout << "Yes" << endl;
//    return 0;
//
//
//}
//// 64 位输出请用 printf("%lld")