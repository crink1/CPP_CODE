//class Solution {
//public:
//    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
//        unordered_set<int> queen_pos;
//        for (const auto& queen : queens) {
//            int x = queen[0], y = queen[1];
//            queen_pos.insert(x * 8 + y);
//        }
//
//        vector<vector<int>> ans;
//        for (int dx = -1; dx <= 1; ++dx) {
//            for (int dy = -1; dy <= 1; ++dy) {
//                if (dx == 0 && dy == 0) {
//                    continue;
//                }
//                int kx = king[0] + dx, ky = king[1] + dy;
//                while (kx >= 0 && kx < 8 && ky >= 0 && ky < 8) {
//                    int pos = kx * 8 + ky;
//                    if (queen_pos.count(pos)) {
//                        ans.push_back({ kx, ky });
//                        break;
//                    }
//                    kx += dx;
//                    ky += dy;
//                }
//            }
//        }
//        return ans;
//    }
//};