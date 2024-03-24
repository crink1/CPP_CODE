///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        ListNode* newhead = new ListNode;
//        ListNode* cur = newhead;
//        int t = 0;
//        while (l1 != nullptr || l2 != nullptr || t)
//        {
//            if (l1 != nullptr)
//            {
//                t += l1->val;
//                l1 = l1->next;
//            }
//            if (l2 != nullptr)
//            {
//                t += l2->val;
//                l2 = l2->next;
//            }
//            ListNode* tmp = new ListNode;
//            tmp->val = t % 10;
//            t = t / 10;
//            cur->next = tmp;
//            cur = cur->next;
//            tmp->next = nullptr;
//        }
//        return newhead->next;
//
//    }
//};
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
//    ListNode* reverseList(ListNode* head) {
//        ListNode* prev = nullptr;
//        ListNode* cur = head;
//        while (cur)
//        {
//            ListNode* next = cur->next;
//            cur->next = prev;
//            prev = cur;
//            cur = next;
//        }
//        return prev;
//    }
//    ListNode* addInList(ListNode* head1, ListNode* head2) {
//        ListNode* l1 = reverseList(head1);
//        ListNode* l2 = reverseList(head2);
//
//        ListNode* newhead = new ListNode(0);
//        ListNode* cur = newhead;
//        int t = 0;
//        while (l1 != nullptr || l2 != nullptr || t)
//        {
//            if (l1 != nullptr)
//            {
//                t += l1->val;
//                l1 = l1->next;
//            }
//            if (l2 != nullptr)
//            {
//                t += l2->val;
//                l2 = l2->next;
//            }
//            ListNode* tmp = new ListNode(0);
//            tmp->val = t % 10;
//            t = t / 10;
//            cur->next = tmp;
//            cur = cur->next;
//            tmp->next = nullptr;
//        }
//        return reverseList(newhead->next);
//
//
//    }
//};
