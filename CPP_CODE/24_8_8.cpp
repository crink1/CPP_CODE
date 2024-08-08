///**
// * struct TreeNode {
// *	int val;
// *	struct TreeNode *left;
// *	struct TreeNode *right;
// *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// * };
// */
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param root TreeNode类
//     * @return int整型
//     */
//
//    int maxsum = INT_MIN;
//
//    int maxSum(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//
//        int left = max(0, maxSum(root->left));
//        int right = max(0, maxSum(root->right));
//
//
//        maxsum = max(maxsum, root->val + left + right);
//
//        return root->val + max(left, right);
//    }
//
//
//    int maxPathSum(TreeNode* root) {
//        // write code here
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        maxSum(root);
//        return maxsum;
//    }
//};
//#include <cstring>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool vis[15];
//int a[15];
//int main() {
//    int n = 0;
//    cin >> n;
//    int ret = 0;
//    vector<int> v;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        v.push_back(i);
//    }
//    do
//    {
//        int flag = 1;
//        for (auto& i : v)
//        {
//            if (vis[a[i]])
//            {
//                flag = 0;
//                break;
//            }
//            vis[i] = true;
//        }
//        if (flag)
//        {
//            ret++;
//        }
//        memset(vis, 0, sizeof vis);
//    } while (next_permutation(v.begin(), v.end()));
//    cout << ret;
//}
//// 64 位输出请用 printf("%lld")
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int q = 0;
//    cin >> q;
//    while (q--)
//    {
//        char tmp = -1;
//        string s;
//        cin >> s;
//
//        if ((s[s.size() - 1] - '0') % 2 == 0)
//        {
//            cout << s << endl;
//            continue;
//        }
//        bool f = false;
//        for (auto& i : s)
//        {
//            if ((i - '0') % 2 == 0)
//            {
//                swap(i, s.back());
//                f = true;
//                break;
//            }
//
//        }
//
//        if (f)
//        {
//            cout << s << endl;
//        }
//        else
//        {
//            cout << -1 << endl;
//        }
//
//
//
//
//
//    }
//    return 0;
//}
//// 64 位输出请用 printf("%lld")