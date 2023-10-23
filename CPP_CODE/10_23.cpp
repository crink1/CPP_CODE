//#include <climits>
//#include <iostream>
//using namespace std;
//
//int main() {
//    string s1;
//    cin >> s1;
//    string s2;
//    cin >> s2;
//    if (s1.size() > s2.size())
//    {
//        swap(s1, s2);
//    }
//    int left1 = 0, right1 = 0;
//    int left2 = 0, right2 = 0;
//    int left = 0, len = 0;
//    for (int i = 0; i < s1.size(); i++)
//    {
//        left2 = 0;
//        while (left2 < s2.size() && s2[left2] != s1[i])
//        {
//            left2++;
//        }
//        right2 = left2;
//        left1 = i;
//        right1 = i;
//        while (right1 < s1.size() && right2 < s2.size() && s1[right1] == s2[right2])
//        {
//            right1++;
//            right2++;
//        }
//        if (len < right1 - left1)
//        {
//            left = i;
//            len = right1 - left1;
//        }
//    }
//}
//class Solution {
//public:
//    string countAndSay(int n) {
//        string s = "1";
//        string tmp;
//
//        for (int i = 1; i < n; i++)
//        {
//            int left = 0;
//            int right = 0;
//            while (right < s.size())
//            {
//
//                if (s[left] != s[right])
//                {
//                    tmp += (right - left) + '0';
//                    tmp += s[left];
//                    left = right;
//                }
//                right++;
//            }
//            tmp += (right - left) + '0';
//            tmp += s[left];
//            left = right;
//
//            s = tmp;
//            tmp = "";
//        }
//        return s;
//
//    }
//};
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	void print()
//	{
//		cout << "A:print()";
//	}
//};
//class B : private A
//{
//public:
//	void print()
//	{
//		cout << "B:print()";
//	}
//};
//class C : public B
//{
//public:
//	void print()
//	{
//		A::print();
//	}
//};
//int main()
//{
//	C b;
//	b.print();
//}
//#include<iostream>
//using namespace std;
//int minNumberOfFrogs(string croakOfFrogs) {
//    int croak[128] = { 0 };
//    for (int i = 0; i < croakOfFrogs.size(); i++)
//    {
//        if (croakOfFrogs[i] == 'c')
//        {
//            if (croak['k'] == 0)
//            {
//                croak['c']++;
//            }
//            else
//            {
//                croak['k']--;
//                croak['c']++;
//            }
//
//        }
//        else if (croakOfFrogs[i] == 'r')
//        {
//            if (croak['c'] == 0)
//            {
//                return -1;
//            }
//            else
//            {
//                croak['c']--;
//                croak['r']++;
//            }
//
//        }
//        else if (croakOfFrogs[i] == 'o')
//        {
//            if (croak['r'] == 0)
//            {
//                return -1;
//            }
//            else
//            {
//                croak['r']--;
//                croak['o']++;
//            }
//
//        }
//        else if (croakOfFrogs[i] == 'a')
//        {
//            if (croak['o'] == 0)
//            {
//                return -1;
//            }
//            else
//            {
//                croak['o']--;
//                croak['a']++;
//            }
//        }
//        else if (croakOfFrogs[i] == 'k')
//        {
//            if (0 == croak['a'])
//            {
//                return -1;
//            }
//            else
//            {
//                croak['a']--;
//                croak['k']++;
//            }
//        }
//    }
//    return croak['k'];
//}
//
//int main()
//{
//    string s = "croakcroak";s
//   int x =  minNumberOfFrogs(s);
//   cout << x<<endl;
//	return 0;
//}