//void PrintOneCircle(vector<vector<int>> matrix, int rows, int cols, int start, vector<int>& v)
//{
//	if (matrix.empty())
//		return;
//
//	int endX = cols - 1 - start;//列
//	int endY = rows - 1 - start;//行
//
//	//从左往右打印
//	for (int i = start; i <= endX; i++)
//	{
//		v.push_back(matrix[start][i]);
//	}
//	//从上到下打印
//	if (start < endY)
//		for (int i = start + 1; i <= endY; i++)
//		{
//			v.push_back(matrix[i][endX]);
//		}
//	//从右往左打印
//	if (start < endX && start < endY)
//		for (int i = endX - 1; i >= start; i--)
//		{
//			v.push_back(matrix[endY][i]);
//		}
//	//从下到上打印
//	if (start < endX && start < endY - 1)
//		for (int i = endY - 1; i >= start + 1; i--)
//		{
//			v.push_back(matrix[i][start]);
//		}
//}
//vector<int> printMatrix(vector<vector<int> > matrix)
//{
//	vector<int> v;
//	if (matrix.size() == 0)
//		return v;
//
//	int rows = matrix.size();
//	int cols = matrix[0].size();
//
//	int start = 0;
//	while (rows > 2 * start && cols > 2 * start)
//	{
//		PrintOneCircle(matrix, rows, cols, start, v);
//		start++;
//	}
//
//	return v;
//}