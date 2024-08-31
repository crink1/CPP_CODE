//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * max water
//     * @param arr int整型vector the array
//     * @return long长整型
//     */
//    long long maxWater(vector<int>& arr) {
//        // write code here
//        long long ret = 0;
//        long long left = 0;
//        long long right = arr.size() - 1;
//        int l_max = arr[0];
//        int r_max = arr[arr.size() - 1];
//
//        while (left <= right)
//        {
//            l_max = max(l_max, arr[left]);
//            r_max = max(r_max, arr[right]);
//
//            if (l_max < r_max)
//            {
//                ret += l_max - arr[left++];
//            }
//            else
//            {
//                ret += r_max - arr[right--];
//            }
//        }
//        return ret;
//    }
//};
//
//#include <iostream>
//using namespace std;
//
//int shu[15];
//int ex1[1005], ex2[1005];
//int c[4];
//int op[4];
//int ret;
//int t = 0;
//
//void dfs(int cnt)
//{
//    if (cnt == 13)
//    {
//        for (int i = 0; i < t; i++)
//        {
//            if (shu[ex1[i]] != shu[ex2[i]])
//            {
//                return;
//            }
//        }
//        ret++;
//        return;
//    }
//
//    for (int i = 0; i < 4; i++)
//    {
//        if (c[i] >= op[i])
//        {
//            continue;
//        }
//        shu[cnt] = i;
//        c[i]++;
//        dfs(cnt + 1);
//        c[i]--;
//    }
//
//}
//
//
//int main() {
//
//    for (int i = 0; i < 4; i++)
//    {
//        cin >> op[i];
//    }
//
//    cin >> t;
//    for (int i = 0; i < t; i++)
//    {
//        cin >> ex1[i] >> ex2[i];
//    }
//    dfs(1);
//    cout << ret;
//
//    return 0;
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int m, n;
//    cin >> m >> n;
//    vector<vector<int>> vv(m, vector<int>(n));
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> vv[i][j];
//        }
//    }
//    for (int j = 0; j < n; j++)
//    {
//        for (int i = 0; i < m; i++)
//        {
//            cout << vv[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//
//
//}
//// 64 位输出请用 printf("%lld")