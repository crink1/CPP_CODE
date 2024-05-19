//class Solution {
//public:
//    char arr[4] = { 'A','C','G','T' };
//    int minMutation(string startGene, string endGene, vector<string>& bank) {
//        if (startGene == endGene)
//        {
//            return 0;
//        }
//        unordered_set<string> banks;
//        for (auto& i : bank)
//        {
//            banks.insert(i);
//        }
//        if (banks.count(endGene) == 0)
//        {
//            return -1;
//        }
//        unordered_set<string> vis;
//        queue<string> q;
//        vis.insert(startGene);
//        q.push(startGene);
//        int cnt = 1;
//        int lv = 1;
//        while (q.size())
//        {
//            string t = q.front();
//
//            q.pop();
//            cnt--;
//            for (int i = 0; i < 8; i++)
//            {
//                string tmp = t;
//                for (int k = 0; k < 4; k++)
//                {
//                    tmp[i] = arr[k];
//                    if (!vis.count(tmp) && banks.count(tmp))
//                    {
//                        if (tmp == endGene)
//                        {
//                            return lv;
//                        }
//                        q.push(tmp);
//                        vis.insert(tmp);
//                    }
//
//                }
//            }
//
//            if (cnt == 0)
//            {
//                cnt = q.size();
//                lv++;
//            }
//
//        }
//
//        return -1;
//
//    }
//};