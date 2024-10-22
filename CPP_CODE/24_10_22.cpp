//class Solution {
//public:
//    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> ret(nums1.size(), -1);
//        stack<int> s;
//        s.push(0);
//        unordered_map<int, int> hash;
//        for (int i = 0; i < nums1.size(); i++) {
//            hash[nums1[i]] = i;
//        }
//
//        for (int i = 1; i < nums2.size(); i++) {
//
//            while (!s.empty() && nums2[i] > nums2[s.top()]) {
//                if (hash.count(nums2[s.top()])) {
//                    int inx = hash[nums2[s.top()]];
//                    ret[inx] = nums2[i];
//                }
//                s.pop();
//            }
//            s.push(i);
//        }
//        return ret;
//
//    }
//};