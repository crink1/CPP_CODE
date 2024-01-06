//class Solution {
//public:
//    int longestSubsequence(vector<int>& arr, int difference) {
//        int n = arr.size();
//        vector<int> dp(n, 1);
//        int ret = 1;
//        unordered_map<int, int> hash;
//        for (int i = 0; i < n; i++)
//        {
//            if (hash.count(arr[i] - difference))
//            {
//                dp[i] += hash[arr[i] - difference];
//            }
//
//            if (dp[i] > hash[arr[i]])
//            {
//                hash[arr[i]] = dp[i];
//            }
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};

//class Solution {
//public:
//    int longestSubsequence(vector<int>& arr, int difference) {
//        int n = arr.size();
//        int ret = 1;
//        unordered_map<int, int> hash;
//        for (int i = 0; i < n; i++)
//        {
//            hash[arr[i]] = hash[arr[i] - difference] + 1;
//            ret = max(ret, hash[arr[i]]);
//        }
//        return ret;
//    }
//};
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void fun(const char* fname, const char* st)
//{
//	FILE* myf;
//	int i;
//	myf = fopen(fname, "w");
//	for (i = 0; i < strlen(st); i++) fputc(st[i], myf);
//	fclose(myf);
//}
//int main()
//{
//	//fun("test.txt", "new world");
//	//fun("test.txt", "hello,");
//
//	return 0;
//}
//#include<stdio.h>
//#define Mul(x,y) ++x*++y
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	printf("%d", Mul(a + b, b + c));
//	return 0;
//}
//#include <stdio.h>
//#define a 10
//void foo();
//int main()
//{
//	printf("%d..", a);
//	foo();
//	printf("%d", a);
//	return 0;
//}
//void foo() {
//#undef a
//#define a 50
//}

//                                                             