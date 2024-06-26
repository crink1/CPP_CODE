//class NumArray {
//private:
//    vector<int> sum; // sum[i] 表示第 i 个块的元素和
//    int size; // 块的大小
//    vector<int>& nums;
//public:
//    NumArray(vector<int>& nums) : nums(nums) {
//        int n = nums.size();
//        size = sqrt(n);
//        sum.resize((n + size - 1) / size); // n/size 向上取整
//        for (int i = 0; i < n; i++) {
//            sum[i / size] += nums[i];
//        }
//    }
//
//    void update(int index, int val) {
//        sum[index / size] += val - nums[index];
//        nums[index] = val;
//    }
//
//    int sumRange(int left, int right) {
//        int b1 = left / size, i1 = left % size, b2 = right / size, i2 = right % size;
//        if (b1 == b2) { // 区间 [left, right] 在同一块中
//            return accumulate(nums.begin() + b1 * size + i1, nums.begin() + b1 * size + i2 + 1, 0);
//        }
//        int sum1 = accumulate(nums.begin() + b1 * size + i1, nums.begin() + b1 * size + size, 0);
//        int sum2 = accumulate(nums.begin() + b2 * size, nums.begin() + b2 * size + i2 + 1, 0);
//        int sum3 = accumulate(sum.begin() + b1 + 1, sum.begin() + b2, 0);
//        return sum1 + sum2 + sum3;
//    }
//};