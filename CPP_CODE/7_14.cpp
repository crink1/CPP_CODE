///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// *	ListNode(int x) : val(x), next(nullptr) {}
// * };
// */
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param head1 ListNode类
//     * @param head2 ListNode类
//     * @return ListNode类
//     */
//
//
//    ListNode* reverseList(ListNode* head) {
//
//        ListNode* prev = nullptr;
//        ListNode* next = head;
//        ListNode* cur = head;
//        while (cur)
//        {
//            next = cur->next;
//            cur->next = prev;
//            prev = cur;
//            cur = next;
//        }
//        return prev;
//    }
//
//    ListNode* addInList(ListNode* head1, ListNode* head2) {
//        // write code here
//        head1 = reverseList(head1);
//        head2 = reverseList(head2);
//        int t = 0;
//
//        ListNode* newhead = new ListNode(0);
//        ListNode* ret = newhead;
//        while (head1 || head2 || t)
//        {
//            if (head1)
//            {
//                t += head1->val;
//                head1 = head1->next;
//            }
//            if (head2)
//            {
//                t += head2->val;
//                head2 = head2->next;
//
//            }
//            ret->next = new ListNode(t % 10);
//            ret = ret->next;
//            t /= 10;
//        }
//        ListNode* res = reverseList(newhead->next);
//        delete newhead;
//        return res;
//
//
//    }
//};
//
//
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param s string字符串 第一个整数
//     * @param t string字符串 第二个整数
//     * @return string字符串
//     */
//    string solve(string s, string t) {
//        // write code here
//        reverse(s.begin(), s.end());
//        reverse(t.begin(), t.end());
//        int x = s.size();
//        int y = t.size();
//        vector<int> v(x + y - 1);
//        for (int i = 0; i < x; i++)
//        {
//            for (int j = 0; j < y; j++)
//            {
//                v[i + j] += (s[i] - '0') * (t[j] - '0');
//            }
//        }
//
//        string ret;
//        int cur = 0, tmp = 0;
//        while (cur < x + y - 1 || tmp != 0)
//        {
//            if (cur < x + y - 1)
//            {
//                tmp += v[cur++];
//            }
//            ret += (tmp % 10) + '0';
//            tmp /= 10;
//        }
//        while (ret.size() > 1 && ret.back() == '0')
//        {
//            ret.pop_back();
//        }
//
//        reverse(ret.begin(), ret.end());
//        return ret;
//
//
//    }
//};
//
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 计算两个数之和
//     * @param s string字符串 表示第一个整数
//     * @param t string字符串 表示第二个整数
//     * @return string字符串
//     */
//    string solve(string s, string t) {
//        // write code here
//        string ret = "";
//        int tmp = 0;
//        int i = s.size() - 1;
//        int j = t.size() - 1;
//        while (i >= 0 || j >= 0 || tmp)
//        {
//            if (i >= 0)
//            {
//                tmp += s[i--] - '0';
//            }
//            if (j >= 0)
//            {
//                tmp += t[j--] - '0';
//            }
//
//
//            ret += (tmp % 10) + '0';
//            tmp /= 10;
//
//
//        }
//        reverse(ret.begin(), ret.end());
//        return ret;
//
//    }
//};