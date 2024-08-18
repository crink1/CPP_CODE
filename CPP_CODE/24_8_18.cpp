//#include <cstring>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int ret = 0;
//int m = 0;
//int n = 0;
//bool vis[1001][1001];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//void dfs(int cnt, vector<vector<int>>& vv, int i, int j)
//{
//    ret = max(ret, cnt);
//    for (int k = 0; k < 4; k++)
//    {
//        int x = dx[k] + i;
//        int y = dy[k] + j;
//        if (x >= 0 && x < m && y >= 0 && y < n && vis[x][y] == false && vv[x][y] < vv[i][j])
//        {
//            vis[x][y] = true;
//            dfs(cnt + 1, vv, x, y);
//            vis[x][y] = false;
//        }
//    }
//
//}
//
//int main() {
//
//    cin >> m >> n;
//    vector<vector<int>> vv(m, vector<int>(n));
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> vv[i][j];
//        }
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            memset(vis, 0, sizeof vis);
//            dfs(1, vv, i, j);
//        }
//    }
//    cout << ret;
//
//
//}
//// 64 位输出请用 printf("%lld")
//
///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// *	ListNode(int x) : val(x), next(nullptr) {}
// * };
// */
//#include <queue>
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param lists ListNode类vector
//     * @return ListNode类
//     */
//    struct cmp
//    {
//        bool operator()(ListNode* x, ListNode* y)
//        {
//            return x->val > y->val;
//        }
//    };
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        // write code here
//        priority_queue<ListNode*, vector<ListNode*>, cmp> q;
//        for (auto& i : lists)
//        {
//            if (i)
//            {
//                q.push(i);
//            }
//        }
//        ListNode* newhead = new ListNode(0);
//        ListNode* prev = newhead;
//        while (!q.empty())
//        {
//            ListNode* t = q.top();
//            q.pop();
//            if (t->next)
//            {
//                q.push(t->next);
//            }
//            prev->next = t;
//            prev = prev->next;
//        }
//        prev = newhead->next;
//        delete newhead;
//        return prev;
//
//    }
//};
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 旋转字符串
//     * @param A string字符串
//     * @param B string字符串
//     * @return bool布尔型
//     */
//    bool solve(string A, string B) {
//        // write code here
//        return A.size() == B.size() && (A + A).find(B) != string::npos;
//    }
//};