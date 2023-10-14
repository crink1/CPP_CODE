//class Solution {
//public:
//    int pivotIndex(vector<int>& nums) {
//        vector<int> v;
//        v.push_back(nums[0]);
//        for (int i = 1; i < nums.size(); i++)
//        {
//            int tmp = v[i - 1] + nums[i];
//            v.push_back(tmp);
//        }
//        for (int i = 0; i < nums.size(); i++)
//        {
//            int tmp = v[i];
//            int left = 0;
//            if (i != 0)
//            {
//                left = v[i - 1];
//            }
//
//            if ((v[nums.size() - 1] - tmp) == left)
//            {
//                return i;
//            }
//        }
//        return -1;
//    }
//};
//#include <iostream>
//#include <iterator>
//#include <string>
//using namespace std;
//
//bool ifpn(string s)
//{
//    int left = 0;
//    int right = s.size() - 1;
//    while (left < right)
//    {
//        if (s[left] != s[right])
//        {
//            return false;
//        }
//        left++;
//        right--;
//    }
//    return true;
//}
//
//int main()
//{
//    string s1;
//    cin >> s1;
//    string s2;
//    cin >> s2;
//    int count = 0;
//    for (int i = 0; i <= s1.size(); i++)
//    {
//        string tmp = s1;
//        tmp.insert(i, s2);
//        if (ifpn(tmp))
//        {
//            count++;
//        }
//
//    }
//    cout << count << endl;
//    return 0;
//
//}
