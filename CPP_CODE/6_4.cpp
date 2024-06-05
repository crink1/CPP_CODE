//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int n = nums.size();
//        if (n <= 2)
//        {
//            return n;
//        }
//
//        int s = 2;
//        int f = 2;
//        while (f < n)
//        {
//            if (nums[s - 2] != nums[f])
//            {
//                nums[s] = nums[f];
//                s++;
//            }
//            f++;
//        }
//        return s;
//    }
//};

//class Solution {
//public:
//    int hIndex(vector<int>& citations) {
//        sort(citations.begin(), citations.end());
//        int h = 0;
//        int i = citations.size() - 1;
//        while (i >= 0 && citations[i] > h)
//        {
//            h++;
//            i--;
//        }
//        return h;
//    }
//};

//class RandomizedSet {
//public:
//    RandomizedSet() {
//        srand(time(nullptr));
//    }
//
//    bool insert(int val) {
//        if (hash.count(val))
//        {
//            return false;
//        }
//        int i = v.size();
//        v.push_back(val);
//        hash[val] = i;
//        return true;
//
//    }
//
//    bool remove(int val) {
//        if (!hash.count(val))
//        {
//            return false;
//        }
//        int i = hash[val];
//        int back = v.back();
//        v[i] = back;
//        hash[back] = i;
//        v.pop_back();
//        hash.erase(val);
//        return true;
//
//    }
//
//    int getRandom() {
//        int r = rand() % v.size();
//        return v[r];
//
//    }
//    vector<int> v;
//    unordered_map<int, int> hash;
//};
//
///**
// * Your RandomizedSet object will be instantiated and called as such:
// * RandomizedSet* obj = new RandomizedSet();
// * bool param_1 = obj->insert(val);
// * bool param_2 = obj->remove(val);
// * int param_3 = obj->getRandom();
