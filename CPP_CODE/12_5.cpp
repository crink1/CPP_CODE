//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//int main()
//{
//	FILE* fp = NULL;
//	char buff[255];
//
//	fp = fopen("/tmp/test.txt", "r");
//	fscanf(fp, "%s", buff);
//	printf("1: %s\n", buff);
//
//	fgets(buff, 255, (FILE*)fp);
//	printf("2: %s\n", buff);
//
//	fgets(buff, 255, (FILE*)fp);
//	printf("3: %s\n", buff);
//	fclose(fp);
//	return 0;
//}

//class Solution {
//public:
//	const int MOD = 1e9 + 7;
//	int waysToStep(int n) {
//		// 1. 创建 dp 表
//		// 2. 初始化
//		// 3. 填表
//		// 4. 返回
//		// 处理边界情况
//		if (n == 1 || n == 2) return n;
//		if (n == 3) return 4;
//		vector<int> dp(n + 1);
//		dp[1] = 1, dp[2] = 2, dp[3] = 4;
//		for (int i = 4; i <= n; i++)
//			dp[i] = ((dp[i - 1] + dp[i - 2]) % MOD + dp[i - 3]) % MOD;
//		return dp[n];
//	}
//};
