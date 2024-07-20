//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    long long n = 0;
//    cin >> n;
//
//    string str;
//    cin >> str;
//
//    long long s = 0; //以i位置为结尾有几个s
//    long long sh = 0; //以i位置为结尾有几个sh
//    long long shy = 0; //以i位置为结尾有几个shy
//
//    for (long long i = 0; i < n; i++)
//    {
//        if (str[i] == 's')
//        {
//            s++;
//        }
//        else if (str[i] == 'h')
//        {
//            sh = s + sh;
//        }
//        else if (str[i] == 'y')
//        {
//            shy = sh + shy;
//        }
//    }
//    cout << shy;
//    return 0;
//
//}
//// 64 位输出请用 printf("%lld")
//
///*
//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x) :
//            val(x), next(NULL) {
//    }
//};*/
//class Solution {
//public:
//    ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
//        ListNode* p1 = pHead1;
//        ListNode* p2 = pHead2;
//        while (p1 != p2)
//        {
//            if (p1 == nullptr)
//            {
//                p1 = pHead2;
//            }
//            else
//            {
//                p1 = p1->next;
//            }
//
//            if (p2 == nullptr)
//            {
//                p2 = pHead1;
//            }
//            else
//            {
//                p2 = p2->next;
//            }
//        }
//        return p1;
//    }
//};
//
//
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main() {
//    string s, t;
//    getline(cin, s);
//    getline(cin, t);
//
//    string ret;
//    for (int i = 0; i < s.size(); i++)
//    {
//        int flag = 0;
//        for (int j = 0; j < t.size(); j++)
//        {
//            if (s[i] == t[j])
//            {
//                flag++;
//            }
//        }
//        if (flag == 0)
//        {
//            ret += s[i];
//        }
//    }
//    for (int i = 0; i < ret.size(); i++)
//    {
//        cout << ret[i];
//    }
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")