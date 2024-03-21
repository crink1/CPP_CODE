c/*lass Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for (auto& i : nums)
        {
            sum += i;
        }
        int a = (target + sum) / 2;
        if (a < 0 || ((sum + target) % 2))
        {
            return 0;
        }
        vector<int> dp(a + 1);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = a; j >= nums[i - 1]; j--)
            {
                dp[j] = dp[j];
                dp[j] += dp[j - nums[i - 1]];
            }
        }
        return dp[a];

    }
};*/

//#include<iostream>
//#include<vector>
//using namespace std;
//
//void swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int qs1(vector<int>& v, int left, int right)
//{
//	int begin = left;
//	int end = right;
//	int k = left;
//	while (begin < end)
//	{
//		while (begin < end && v[end] >= v[k])
//		{
//			end--;
//		}
//		while (begin < end && v[begin] <= v[k])
//		{
//			begin++;
//		}
//		swap(&v[begin], &v[end]);
//	}
//	swap(&v[end], &v[k]);
//	k = end;
//	return k;
//
//}
//
//void qs(vector<int>& v, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	
//	int keyi = qs1(v, begin, end);
//	qs(v, begin, keyi - 1);
//	qs(v, keyi + 1, end);
//
//}
//
//
//int main()
//{
//	vector<int> a = { 2,4,7,5,42,1 };
//	qs(a, 0, a.size() - 1);
//	for (auto& i : a)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}