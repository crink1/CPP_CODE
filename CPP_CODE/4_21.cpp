//class Solution {
//public:
//    bool CheckPermutation(string s1, string s2) {
//        if (s1.size() != s2.size())
//        {
//            return false;
//        }
//        int hash[26] = { 0 };
//        for (auto& i : s1)
//        {
//            hash[i - 'a']++;
//        }
//        for (auto& i : s2)
//        {
//            hash[i - 'a']--;
//            if (hash[i - 'a'] < 0)
//            {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};

//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        unordered_set<int> hash;
//        for (auto& i : nums)
//        {
//            if (hash.count(i))
//            {
//                return true;
//            }
//            else
//            {
//                hash.insert(i);
//
//            }
//        }
//        return false;
//    }
//};