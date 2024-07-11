//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main() {
//    long long n = 0, k = 0;
//    cin >> n >> k;
//    priority_queue< long long> q;
//    long long ret = 0;
//    for (long long i = 0; i < n; i++)
//    {
//        long long tmp = 0;
//        cin >> tmp;
//        if (tmp % 2 != 0)
//        {
//            ret += tmp;
//        }
//        else
//        {
//            q.push(tmp);
//        }
//    }
//
//    while (k > 0 && !q.empty())
//    {
//        long long tmp = q.top();
//        q.pop();
//        tmp /= 2;
//        if (tmp % 2 != 0)
//        {
//            ret += tmp;
//        }
//        else
//        {
//            q.push(tmp);
//        }
//        k--;
//    }
//
//    while (!q.empty())
//    {
//        ret += q.top();
//        q.pop();
//    }
//    cout << ret;
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0, x = 0;
//    cin >> n >> x;
//    int val = 0;
//    int left = 0;
//    int rl = 0;
//    int rr = 0x3f3f3f3f;
//
//
//    vector<int> v(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//    }
//    int i = 0;
//    while (i < n)
//    {
//        if (val >= x)
//        {
//            if ((i - left) < (rr - rl))
//            {
//                rl = left;
//                rr = i;
//            }
//            val -= v[left++];
//
//        }
//        else
//        {
//            val += v[i++];
//        }
//
//    }
//    cout << rl + 1 << " " << rr;
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    vector<string> v;
//    string s;
//    while (cin >> s)
//    {
//        v.push_back(s);
//    }
//    for (auto& i : v)
//    {
//        if (i[0] >= 'a' && i[0] <= 'z')
//        {
//            i[0] -= 32;
//        }
//        cout << i[0];
//    }
//    return 0;
//}
//// 64 位输出请用 printf("%lld")