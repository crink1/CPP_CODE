//class Solution {
//public:
//    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//        unordered_map<int, int> hash;
//        int ret = 0;
//        for (auto& i : nums1)
//        {
//            for (auto& j : nums2)
//            {
//                hash[i + j]++;
//            }
//        }
//
//        for (auto& i : nums3)
//        {
//            for (auto& j : nums4)
//            {
//                if (hash.find(0 - (i + j)) != hash.end())
//                {
//                    ret += hash[0 - (i + j)];
//                }
//            }
//        }
//        return ret;
//
//
//    }
//};


//class Solution {
//public:
//    bool canConstruct(string ransomNote, string magazine) {
//        int hash[26] = { 0 };
//        for (auto& i : magazine)
//        {
//            hash[i - 'a']++;
//        }
//
//        for (auto& i : ransomNote)
//        {
//            hash[i - 'a']--;
//            if (hash[i - 'a'] < 0)
//            {
//                return false;
//            }
//        }
//        return true;
//
//    }
//};


//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    while (cin >> s)
//    {
//        int cnt = 0;
//        int left = s.size() - 1;
//        for (auto& i : s)
//        {
//            if (i >= '0' && i <= '9')
//            {
//                cnt++;
//            }
//        }
//        s.resize(s.size() + cnt * 5);
//        int right = s.size() - 1;
//
//        while (left >= 0)
//        {
//            if (s[left] >= '0' && s[left] <= '9')
//            {
//                s[right--] = 'r';
//                s[right--] = 'e';
//                s[right--] = 'b';
//                s[right--] = 'm';
//                s[right--] = 'u';
//                s[right--] = 'n';
//            }
//            else
//            {
//                s[right--] = s[left];
//            }
//
//            left--;
//        }
//        cout << s << endl;
//    }
//    return 0;
//}