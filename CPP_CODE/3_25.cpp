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
//    ListNode* swapPairs(ListNode* head) {
//        if (nullptr == head || nullptr == head->next)
//        {
//            return head;
//        }
//        ListNode* newhead = new ListNode;
//        ListNode* prev = newhead;
//        ListNode* cur = head;
//        ListNode* next = head->next;
//        while (cur && next)
//        {
//
//            ListNode* nnext = next->next;
//            prev->next = next;
//            cur->next = nnext;
//            next->next = cur;
//            prev = cur;
//            cur = nnext;
//            if (cur)
//                next = cur->next;
//            if (next)
//                nnext = next->next;
//
//        }
//        return newhead->next;
//    }
//};
//
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
//
//    ListNode* seekmid(ListNode* head)
//    {
//
//        ListNode* fast = head;
//        ListNode* slow = head;
//        ListNode* cur;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            cur = slow;
//            slow = slow->next;
//
//
//        }
//        cur->next = nullptr;
//        return slow;
//    }
//
//    ListNode* reverslist(ListNode* head)
//    {
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
//
//    void reorderList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
//        {
//            return;
//        }
//        ListNode* mid = seekmid(head);
//        ListNode* h2 = reverslist(mid);
//
//        ListNode* newhead = new ListNode;
//        ListNode* cur = newhead;
//        ListNode* h1 = head;
//        while (h1 || h2)
//        {
//            if (h1)
//            {
//                cur->next = h1;
//                cur = cur->next;
//                h1 = h1->next;
//
//            }
//
//            if (h2)
//            {
//                cur->next = h2;
//                cur = cur->next;
//                h2 = h2->next;
//            }
//
//        }
//        head = newhead->next;
//
//    }
//};
//
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
//
//    struct cmp
//    {
//        bool operator()(const ListNode* l1, const ListNode* l2)
//        {
//            return l1->val > l2->val;
//        }
//    };
//
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//
//        priority_queue<ListNode*, vector<ListNode*>, cmp> heap;
//        for (auto& i : lists)
//        {
//            if (i)
//            {
//                heap.push(i);
//            }
//        }
//
//        ListNode* newhead = new ListNode(0);
//        ListNode* prev = newhead;
//        while (!heap.empty())
//        {
//            ListNode* tmp = heap.top();
//            heap.pop();
//            if (tmp->next)
//            {
//                heap.push(tmp->next);
//            }
//            prev->next = tmp;
//            prev = tmp;
//
//        }
//        prev = newhead->next;
//        delete newhead;
//
//
//        return prev;
//
//
//
//
//
//
//
//    }
//};