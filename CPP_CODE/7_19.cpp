//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    vector<string> v(101);
//    int i = 0;
//    while (cin >> v[i++])
//    {
//
//    }
//
//    for (int j = i - 2; j >= 0; j--)
//    {
//        cout << v[j] << " ";
//    }
//    return 0;
//}
//
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//
//    vector<int> v(n);
//    for (auto& i : v)
//    {
//        cin >> i;
//    }
//    int i = 0;
//    int j = 0;
//    int ret = 0;
//    while (j < n)
//    {
//        if (j < n && v[j + 1] <= v[j])
//        {
//            ret += v[j] - v[i];
//            i = j + 1;
//        }
//
//        j++;
//
//    }
//    cout << ret;
//
//}
//// 64 位输出请用 printf("%lld")