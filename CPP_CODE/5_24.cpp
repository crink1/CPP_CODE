//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<functional>
//#include <map>
//#include <set>
//#include <unordered_set>
//#include <unordered_map>
//#include <exception>
//#include <iomanip>
//#include <memory>
//#include <sstream>
//
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	//freopen("in.txt", "r", stdin);
//	vector<vector<char>> checkBoard(20, vector<char>(20));
//
//	char c;
//	while ((c = getchar()) != EOF)
//	{
//		ungetc(c, stdin);
//		for (int i = 0; i < 20; ++i)
//		{
//			for (int j = 0; j < 20; ++j)
//			{
//				c = getchar();
//				checkBoard[i][j] = c;
//			}
//			getchar();
//		}
//
//		bool found = false;
//		for (int i = 0; i < 20; ++i)
//		{
//			if (found) break;
//			for (int j = 0; j < 20; ++j)
//			{
//				if (checkBoard[i][j] == '.') continue;
//				c = checkBoard[i][j];
//				checkBoard[i][j] = '.';
//				int curCount = 1;
//				int x = i + 1;
//				while (x < 20 && checkBoard[x][j] == c)
//				{
//					checkBoard[x][j] = '.';
//					++curCount;
//					++x;
//				}
//				if (curCount >= 5)
//				{
//					found = true;
//					break;
//				}
//				curCount = 1;
//				int y = j + 1;
//				while (y < 20 && checkBoard[i][y] == c)
//				{
//					checkBoard[i][y] = '.';
//					++curCount;
//					++y;
//				}
//				if (curCount >= 5)
//				{
//					found = true;
//					break;
//				}
//				curCount = 1;
//				x = i + 1, y = j + 1;
//				while (x < 20 && y < 20 && checkBoard[x][y] == c)
//				{
//					checkBoard[x][y] = '.';
//					++curCount;
//					++x; ++y;
//				}
//				if (curCount >= 5)
//				{
//					found = true;
//					break;
//				}
//			}
//		}
//
//		if (found) cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//
//	return 0;
//}