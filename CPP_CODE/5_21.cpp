//class Solution {
//public:
//    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//        unordered_set<string> vis;
//        unordered_set<string> wl(wordList.begin(), wordList.end());
//        queue<string> q;
//        q.push(beginWord);
//        int ret = 1;
//        vis.insert(beginWord);
//
//        while (q.size())
//        {
//            ret++;
//            int sz = q.size();
//            while (sz--)
//            {
//                string t = q.front();
//                q.pop();
//                for (int i = 0; i < t.size(); i++)
//                {
//                    string tmp = t;
//                    for (char c = 'a'; c <= 'z'; c++)
//                    {
//                        tmp[i] = c;
//                        if (!vis.count(tmp) && wl.count(tmp))
//                        {
//                            if (tmp == endWord)
//                            {
//                                return ret;
//                            }
//                            q.push(tmp);
//                            vis.insert(tmp);
//                        }
//                    }
//                }
//
//            }
//        }
//
//        return 0;
//
//    }
//};