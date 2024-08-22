//#include <climits>
//#include <iostream>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    int ret = INT_MAX;
//    for (int i = 0; i < 26; i++)
//    {
//        int cnt = 0;
//        int ch = i;
//        for (auto& i : s)
//        {
//            int t = i - 'a';
//            cnt += min(abs(t - ch), abs(26 - abs(t - ch)));
//
//        }
//        ret = min(ret, cnt);
//    }
//    cout << ret;
//}
//// 64 Î»Êä³öÇëÓÃ printf("%lld")