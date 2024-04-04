//class Solution {
//public:
//    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
//        vector<unordered_set<int>> anc(n);   // �洢ÿ���ڵ����ȵĸ�������
//        vector<vector<int>> e(n);   // �ڽӱ�
//        vector<int> indeg(n);   // ��ȱ�
//        // Ԥ����
//        for (const auto& edge : edges) {
//            e[edge[0]].push_back(edge[1]);
//            ++indeg[edge[1]];
//        }
//        // ����������������������
//        queue<int> q;
//        for (int i = 0; i < n; ++i) {
//            if (!indeg[i]) {
//                q.push(i);
//            }
//        }
//        while (!q.empty()) {
//            int u = q.front();
//            q.pop();
//            for (int v : e[u]) {
//                // �����ӽڵ�����ȹ�ϣ��
//                anc[v].insert(u);
//                for (int i : anc[u]) {
//                    anc[v].insert(i);
//                }
//                --indeg[v];
//                if (!indeg[v]) {
//                    q.push(v);
//                }
//            }
//        }
//        // ת��Ϊ������
//        vector<vector<int>> res(n);
//        for (int i = 0; i < n; ++i) {
//            for (int j : anc[i]) {
//                res[i].push_back(j);
//            }
//            sort(res[i].begin(), res[i].end());
//        }
//        return res;
//    }
//};