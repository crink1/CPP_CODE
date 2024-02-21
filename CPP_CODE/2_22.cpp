//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        int left = 0;
//        int right = numbers.size() - 1;
//
//        while (left < right)
//        {
//            if (numbers[left] + numbers[right] < target)
//            {
//                left++;
//            }
//            else if (numbers[left] + numbers[right] > target)
//            {
//                right--;
//            }
//            else
//            {
//                return { left, right };
//            }
//        }
//        return {};
//    }
//};
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param numbers int����vector
//     * @return int����
//     */
//    int MoreThanHalfNum_Solution(vector<int>& numbers) {
//        int cnt = 0;
//        int ret = -1;
//        for (int i = 0; i < numbers.size(); i++)
//        {
//            if (cnt == 0)
//            {
//                ret = numbers[i];
//                cnt++;
//            }
//            else
//            {
//                if (numbers[i] == ret)
//                {
//                    cnt++;
//                }
//                else
//                {
//                    cnt--;
//                }
//
//            }
//        }
//        cnt = 0;
//        for (int i = 0; i < numbers.size(); i++)
//        {
//            if (ret == numbers[i])
//            {
//                cnt++;
//            }
//        }
//        if (cnt > numbers.size() / 2)
//        {
//            return ret;
//        }
//        return 0;
//
//    }
//};