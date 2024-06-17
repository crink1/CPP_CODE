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
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* right = head;
//        ListNode* tmp = new ListNode();
//        tmp->next = head;
//        ListNode* left = tmp;
//
//        for (int i = 0; i < n; i++)
//        {
//            right = right->next;
//        }
//        while (right)
//        {
//            right = right->next;
//            left = left->next;
//        }
//        left->next = left->next->next;
//        ListNode* ret = tmp->next;
//        delete tmp;
//        return ret;
//    }
//};