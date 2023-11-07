//class Solution {
//public:
//    int ret = 0;
//    vector<int> v;
//
//    void mergesort(vector<int>& record, int left, int right)
//    {
//        if (left >= right)
//        {
//            return;
//        }
//        int mid = (right - left) / 2 + left;
//        mergesort(record, left, mid);
//        mergesort(record, mid + 1, right);
//        int cur1 = left, cur2 = mid + 1;
//        int i = 0;
//        while (cur1 <= mid && cur2 <= right)
//        {
//            if (record[cur1] <= record[cur2])
//            {
//                v[i++] = record[cur2++];
//
//            }
//            else
//            {
//                ret += right - cur2 + 1;
//                v[i++] = record[cur1++];
//            }
//        }
//        while (cur1 <= mid)
//        {
//            v[i++] = record[cur1++];
//        }
//        while (cur2 <= right)
//        {
//            v[i++] = record[cur2++];
//        }
//        for (int i = left; i <= right; i++)
//        {
//            record[i] = v[i - left];
//        }
//    }
//
//    int reversePairs(vector<int>& record) {
//        v.resize(record.size());
//        mergesort(record, 0, record.size() - 1);
//        return ret;
//    }
//};