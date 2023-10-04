//class Solution {
//public:
//    vector<int> findSubstring(string s, vector<string>& words) {
//        vector<int> v;
//        unordered_map<string, int> hash1;
//        for (auto& i : words)
//        {
//            hash1[i]++;
//        }
//
//        int len = words[0].size();
//        for (int i = 0; i < len; i++)
//        {
//            int count = 0;
//            int left = i;
//            int right = left;
//            unordered_map<string, int> hash2;
//            while (right + len <= s.size())
//            {
//                string in = s.substr(right, len);
//                hash2[in]++;
//                if (hash2[in] <= hash1[in])
//                {
//                    count++;
//                }
//                if ((right - left + 1) > words.size() * len)
//                {
//                    string out = s.substr(left, len);
//                    if (hash2[out] <= hash1[out])
//                    {
//                        count--;
//                    }
//                    hash2[out]--;
//                    left += len;
//                }
//                if (count == words.size())
//                {
//                    v.push_back(left);
//                }
//                right += len;
//            }
//        }
//        return v;
//    }
//};