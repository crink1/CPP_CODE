//class Solution {
//public:
//    bool lemonadeChange(vector<int>& bills) {
//        int five = 0;
//        int ten = 0;
//        for (auto& i : bills)
//        {
//            if (i == 5)
//            {
//                five++;
//            }
//            else if (i == 10)
//            {
//                if (five)
//                {
//                    five--;
//                    ten++;
//                }
//                else
//                {
//                    return false;
//                }
//            }
//            else
//            {
//                if (five && ten)
//                {
//                    five--;
//                    ten--;
//                }
//                else if (five >= 3)
//                {
//                    five -= 3;
//                }
//                else
//                {
//                    return false;
//                }
//            }
//
//        }
//        return true;
//    }
//};
//class Solution {
//public:
//    int halveArray(vector<int>& nums) {
//        priority_queue<double> heap;
//        double sum = 0.0;
//        int count = 0;
//
//        for (auto& i : nums)
//        {
//            sum += i;
//            heap.push(i);
//        }
//
//        sum /= 2.0;
//
//        while (sum > 0)
//        {
//            double n = heap.top();
//            heap.pop();
//            n /= 2.0;
//            sum -= n;
//            heap.push(n);
//            count++;
//        }
//
//        return count;
//    }
//};