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
//	printf("�� 1 �ַ�����\n\n");
//	int i, j;//����ѭ���ı��� 
//	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//һά���� 
//	int b[3][4];//��ά���� 
//	
//	for (i = 0; i < 3; i++) { //������ 
//		for (j = 0; j < 4; j++) { //������ 
//			b[i][j] = a[i*3 + j]; 
//		}
//	}
//	//����鿴 
//	for (i = 0; i < 3; i++) { //������ 
//		for (j = 0; j < 4; j++) { //������ 
//			printf("%3d  ", b[i][j]);
//		}
//		printf("\n");//���� 
//	}
//}