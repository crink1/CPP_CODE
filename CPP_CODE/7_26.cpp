//#include<stdio.h>
//#include<stdlib.h>
//
//int rand = 0;
//int main()
//{
//	printf("%d", rand);
//	return 0;
//}
//

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	double b;
//	char c;
//
//	// 可以自动识别变量的类型
//	//输入
//	cin >> a;
//	cin >> b >> c;
//	//输出
//	cout << a << endl;
//	cout << b << " " << c << endl;
//	return 0;
//}

#include<iostream>

//using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace rin
{
	int x = 0;

	int Add(int left,int right)
	{
		return left + right;
	}

	struct Node
	{
		struct Node* next;
		int data;
	};

	namespace crin
	{
		int _rand = 0;

		int _Add(int left, int right)
		{
			return left + right;
		}

		struct _Node
		{
			struct Node* next;
			int data;
		};
	}
}

//int main()
//{
//	int a = rin::Add(2, 3);
//	cout << a << endl;
//	cout << rin::x << endl;
//	return 0;
//}
// 
//using rin::Add;
//using rin::x;
//int main()
//{
//	int a = Add(2, 3);
//	cout << a << endl;
//	cout << x << endl;
//	return 0;
//}
using namespace rin;
int main()
{
	int a = Add(2, 3);
	cout << a << endl;
	cout << x << endl;
	return 0;
}

