//class TreeAncestor {
//public:
//    constexpr static int Log = 16;
//    vector<vector<int>> ancestors;
//
//    TreeAncestor(int n, vector<int>& parent) {
//        ancestors = vector<vector<int>>(n, vector<int>(Log, -1));
//        for (int i = 0; i < n; i++) {
//            ancestors[i][0] = parent[i];
//        }
//        for (int j = 1; j < Log; j++) {
//            for (int i = 0; i < n; i++) {
//                if (ancestors[i][j - 1] != -1) {
//                    ancestors[i][j] = ancestors[ancestors[i][j - 1]][j - 1];
//                }
//            }
//        }
//    }
//
//    int getKthAncestor(int node, int k) {
//        for (int j = 0; j < Log; j++) {
//            if ((k >> j) & 1) {
//                node = ancestors[node][j];
//                if (node == -1) {
//                    return -1;
//                }
//            }
//        }
//        return node;
//    }
//};
