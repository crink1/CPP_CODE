//if (matrix.size() == 0 || matrix[0].size() == 0)
//return {};
//
//vector<int>ans;
//int lineBegin = 0, lineEnd = matrix[0].size() - 1; //��¼�еĿ�ͷ���β
//int listBegin = 0, listEnd = matrix.size() - 1; //��¼�еĿ�ͷ���β
//
//while (true)
//{
//    //��������
//    for (int i = lineBegin; i <= lineEnd; i++)
//        ans.push_back(matrix[listBegin][i]);
//    if (++listBegin > listEnd) break;
//
//    //��������
//    for (int i = listBegin; i <= listEnd; i++)
//        ans.push_back(matrix[i][lineEnd]);
//    if (--lineEnd < lineBegin) break;
//
//    //��������
//    for (int i = lineEnd; i >= lineBegin; i--)
//        ans.push_back(matrix[listEnd][i]);
//    if (--listEnd < listBegin) break;
//
//    //��������
//    for (int i = listEnd; i >= listBegin; i--)
//        ans.push_back(matrix[i][lineBegin]);
//    if (++lineBegin > lineEnd) break;
//}
//return ans;