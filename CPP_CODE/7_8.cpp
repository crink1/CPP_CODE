//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    stack<char> st;
//
//    for (auto& i : s)
//    {
//        if (st.empty())
//        {
//            st.push(i);
//        }
//        else if (st.top() == i)
//        {
//            st.pop();
//        }
//        else
//        {
//            st.push(i);
//        }
//    }
//
//    s.resize(st.size());
//    for (int i = s.size() - 1; i >= 0; i--)
//    {
//        s[i] = st.top();
//        st.pop();
//    }
//    if (s.size() == 0)
//    {
//        cout << 0;
//    }
//    else
//        cout << s;
//}
//// 64 λ������� printf("%lld")

//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param nums1 int����vector
//     * @param nums2 int����vector
//     * @return int����vector
//     */
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> ret;
//        set<int> hash;
//        for (auto& i : nums1)
//        {
//            for (auto& j : nums2)
//            {
//                if (i == j)
//                {
//                    hash.insert(i);
//                }
//            }
//        }
//        for (auto& i : hash)
//        {
//            ret.push_back(i);
//        }
//
//        return ret;
//
//    }
//};
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int l = 0;
//    int r = 0;
//    while (cin >> l >> r)
//    {
//        int ret = 0;
//        for (int i = l; i <= r; i++)
//        {
//            int j = i;
//            while (j > 0)
//            {
//                if (j % 10 == 2)
//                {
//                    ret++;
//                }
//                j /= 10;
//            }
//        }
//        cout << ret;
//    }
//}
//// 64 λ������� printf("%lld")