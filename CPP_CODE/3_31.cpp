//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//struct pair_hash {
//    template<class T1, class T2>
//    std::size_t operator () (const std::pair<T1, T2>& p) const {
//        auto hash1 = std::hash<T1>{}(p.first);
//        auto hash2 = std::hash<T2>{}(p.second);
//        return hash1 ^ hash2;
//    }
//};
//
//
//bool dfs(int node, vector<vector<int>>& adj_list, vector<bool>& visited, unordered_set<pair<int, int>, pair_hash>& red_edges) {
//    visited[node] = true;
//    bool is_good = true;
//
//    for (int neighbor : adj_list[node]) {
//        if (!visited[neighbor]) {
//            if (red_edges.find({ node, neighbor }) != red_edges.end() || red_edges.find({ neighbor, node }) != red_edges.end()) {
//                is_good &= dfs(neighbor, adj_list, visited, red_edges);
//            }
//            else {
//                is_good = false;
//            }
//        }
//    }
//    return is_good;
//}
//
//int count_good_nodes(int n, vector<vector<int>>& edges) {
//    vector<vector<int>> adj_list(n);
//    unordered_set<pair<int, int>, pair_hash> red_edges; 
//
//    for (auto& edge : edges) {
//        int u = edge[0] - 1;
//        int v = edge[1] - 1;
//        char color = edge[2];
//
//        if (color == 'R') {
//            red_edges.insert({ u, v });
//            red_edges.insert({ v, u });
//        }
//
//        adj_list[u].push_back(v);
//        adj_list[v].push_back(u);
//    }
//
//    vector<bool> visited(n, false);
//    int good_nodes_count = 0;
//
//    for (int i = 0; i < n; ++i) {
//        if (!visited[i] || adj_list[i].empty()) {
//            if (dfs(i, adj_list, visited, red_edges)) {
//                good_nodes_count++;
//            }
//        }
//    }
//
//    return good_nodes_count;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    vector<vector<int>> edges(m, vector<int>(3));
//    for (int i = 0; i < m; ++i) {
//        cin >> edges[i][0] >> edges[i][1];
//        char color;
//        cin >> color;
//        edges[i][2] = color;
//    }
//
//    cout << count_good_nodes(n, edges) << endl;
//
//    return 0;
//}
