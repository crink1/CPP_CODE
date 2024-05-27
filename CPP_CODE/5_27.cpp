//if (matrix.size() == 0 || matrix[0].size() == 0)
//return {};
//
//vector<int>ans;
//int lineBegin = 0, lineEnd = matrix[0].size() - 1; //记录行的开头与结尾
//int listBegin = 0, listEnd = matrix.size() - 1; //记录列的开头与结尾
//
//while (true)
//{
//    //从左往右
//    for (int i = lineBegin; i <= lineEnd; i++)
//        ans.push_back(matrix[listBegin][i]);
//    if (++listBegin > listEnd) break;
//
//    //从上往下
//    for (int i = listBegin; i <= listEnd; i++)
//        ans.push_back(matrix[i][lineEnd]);
//    if (--lineEnd < lineBegin) break;
//
//    //从右往左
//    for (int i = lineEnd; i >= lineBegin; i--)
//        ans.push_back(matrix[listEnd][i]);
//    if (--listEnd < listBegin) break;
//
//    //从下往上
//    for (int i = listEnd; i >= listBegin; i--)
//        ans.push_back(matrix[i][lineBegin]);
//    if (++lineBegin > lineEnd) break;
//}
//return ans;