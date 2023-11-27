//class Solution {
//public:
//    vector<vector<string>> vvs;
//    vector<string> vs;
//    void dfs(int& n, int pos, bool col[], bool dig1[], bool dig2[])
//    {
//        if (pos == n)
//        {
//            vvs.push_back(vs);
//            return;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (col[i] == false && dig1[pos - i + n] == false && dig2[pos + i] == false)
//            {
//                vs[pos][i] = 'Q';
//                col[i] = dig1[pos - i + n] = dig2[pos + i] = true;
//                dfs(n, pos + 1, col, dig1, dig2);
//                vs[pos][i] = '.';
//                col[i] = dig1[pos - i + n] = dig2[pos + i] = false;
//            }
//        }
//
//    }
//
//    vector<vector<string>> solveNQueens(int n)
//    {
//        bool col[10] = { false };
//        bool dig1[20] = { false };
//        bool dig2[20] = { false };
//        vs.resize(n);
//        for (auto& e : vs)
//        {
//            e.append(n, '.');
//        }
//
//        dfs(n, 0, col, dig1, dig2);
//        return vvs;
//    }
//};