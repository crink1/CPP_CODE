//using PII = pair<int, int>;
//
//class Solution {
//public:
//    bool canMeasureWater(int x, int y, int z) {
//        stack<PII> stk;
//        stk.emplace(0, 0);
//        auto hash_function = [](const PII& o) {return hash<int>()(o.first) ^ hash<int>()(o.second); };
//        unordered_set<PII, decltype(hash_function)> seen(0, hash_function);
//        while (!stk.empty()) {
//            if (seen.count(stk.top())) {
//                stk.pop();
//                continue;
//            }
//            seen.emplace(stk.top());
//
//            auto [remain_x, remain_y] = stk.top();
//            stk.pop();
//            if (remain_x == z || remain_y == z || remain_x + remain_y == z) {
//                return true;
//            }
//            // �� X ��������
//            stk.emplace(x, remain_y);
//            // �� Y ��������
//            stk.emplace(remain_x, y);
//            // �� X �����ա�
//            stk.emplace(0, remain_y);
//            // �� Y �����ա�
//            stk.emplace(remain_x, 0);
//            // �� X ����ˮ��� Y ����ֱ�������򵹿ա�
//            stk.emplace(remain_x - min(remain_x, y - remain_y), remain_y + min(remain_x, y - remain_y));
//            // �� Y ����ˮ��� X ����ֱ�������򵹿ա�
//            stk.emplace(remain_x + min(remain_y, x - remain_x), remain_y - min(remain_y, x - remain_x));
//        }
//        return false;
//    }
//};
