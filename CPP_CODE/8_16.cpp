#include<iostream>


//template
//
//template<T1, T2>
//
//template<class T1, T2>
//
//template<class T1, class T2>
//
//template<typename T1, T2>
//
//template<typename T1, typename T2>
//
//template<class T1, typename T2>
//
//< typename T1, class T2 >

//int globalVar = 1;
//
//static int staticGlobalVar = 1;
//
//void Test()
//
//{
//
//	static int staticVar = 1;
//
//	int localVar = 1;
//
//
//
//	int num1[10] = { 1, 2, 3, 4 };
//
//	char char2[] = "abcd";
//
//	char* pChar3 = "abcd";
//
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//
//	free(ptr1);
//
//	free(ptr3);
//
//}



//1. 选择题：
//
//选项 : A.栈 B.堆 C.数据段(静态区) D.代码段(常量区)
//
//globalVar在哪里？_C___  staticGlobalVar在哪里？_C___
//
//staticVar在哪里？_C___  localVar在哪里？___A_
//
//num1 在哪里？__A__
//
//
//
//char2在哪里？__A__ * char2在哪里？_A__
//
//pChar3在哪里？__A__ * pChar3在哪里？__D__
//
//ptr1在哪里？__A__ * ptr1在哪里？__B__
//
//
//
//2. 填空题：
//
//sizeof(num1) = __40__;
//
//sizeof(char2) = ___5_;   strlen(char2) = __4__;
//
//sizeof(pChar3) = _4/8___;   strlen(pChar3) = __4__;
//
//sizeof(ptr1) = __4/8__;
//#include<string>
//using namespace std;
//
//bool isPalindrome(string s) {
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] >= 'A' && s[i] <= 'Z')
//        {
//            s[i] -= 32;
//        }
//
//    }
//
//    int left = 0;
//    int right = s.size() - 1;
//    while (left < right)
//    {
//        while (left < right && (s[left] < 'a' || s[left] >'z'))
//        {
//            left++;
//        }
//        while (left < right && (s[right] < 'a' || s[right] >'z'))
//        {
//            right--;
//        }
//        if (s[left] != s[right])
//        {
//            return false;
//        }
//        left++;
//        right--;
//
//    }
//    return true;
//}
//
//int main()
//{
//    string s;
//    getline(cin, s);
//    isPalindrome(s);
//    return 0;
//}
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> vv;
//        vv.resize(numRows);
//
//        for (size_t i = 0; i < vv.size(); i++)
//        {
//            vv[i].resize(i + 1, 0);
//            vv[i][0] = vv[i][vv[i].size() - 1] = 1;
//        }
//        for (size_t i = 0; i < vv.size(); i++)
//        {
//            for (size_t j = 0; j < vv[i].size(); j++)
//            {
//                if (vv[i][j] == 0)
//                {
//                    vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
//
//                }
//            }
//        }
//        return vv;
//
//    }
//};