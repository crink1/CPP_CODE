//class Solution {
//public:
//    bool CheckPermutation(string s1, string s2) {
//        if (s1.size() != s2.size())
//        {
//            return false;
//        }
//        unordered_map<char, int> hash;
//        for (auto& i : s1)
//        {
//            hash[i]++;
//        }
//        for (auto& i : s2)
//        {
//            hash[i]--;
//        }
//        for (auto& i : hash)
//        {
//            if (i.second != 0)
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};
//#include<stdio.h>
//
//int main() {
//	printf("第 1 种方法：\n\n");
//	int i, j;//控制循环的变量 
//	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//一维数组 
//	int b[3][4];//二维数组 
//	
//	for (i = 0; i < 3; i++) { //控制行 
//		for (j = 0; j < 4; j++) { //控制列 
//			b[i][j] = a[i*3 + j]; 
//		}
//	}
//	//输出查看 
//	for (i = 0; i < 3; i++) { //控制行 
//		for (j = 0; j < 4; j++) { //控制列 
//			printf("%3d  ", b[i][j]);
//		}
//		printf("\n");//换行 
//	}
//}