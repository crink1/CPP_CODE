//class Solution {
//public:
//
//    int getkey(vector<int>& stock, int begin, int end)
//    {
//        return stock[rand() % (end - begin + 1) + begin];
//    }
//
//    void qsortfind(vector<int>& stock, int cnt, int begin, int end)
//    {
//        if (begin >= end)
//        {
//            return;
//        }
//        int key = getkey(stock, begin, end);
//        int i = begin;
//        int left = begin - 1;
//        int right = end + 1;
//        while (i < right)
//        {
//            if (stock[i] > key)
//            {
//                swap(stock[i], stock[--right]);
//            }
//            else if (stock[i] < key)
//            {
//                swap(stock[i++], stock[++left]);
//            }
//            else
//            {
//                i++;
//            }
//        }
//        int a = left - begin + 1;
//        int b = right - left - 1;
//        if (a >= cnt)
//        {
//            qsortfind(stock, cnt, begin, left);
//        }
//        else if (a + b >= cnt)
//        {
//            return;
//        }
//        else
//        {
//            qsortfind(stock, cnt - a - b, right, end);
//        }
//
//    }
//
//    vector<int> inventoryManagement(vector<int>& stock, int cnt) {
//        srand(time(NULL));
//        qsortfind(stock, cnt, 0, stock.size() - 1);
//        return { stock.begin(),stock.begin() + cnt };
//    }
//};