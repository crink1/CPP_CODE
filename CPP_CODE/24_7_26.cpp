//#include<iostream>
//#include<math.h>
//using namespace std;
//
//bool isPrime(int x)
//{
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x != 2 && x % i == 0)
//			return false;
//	}
//	return true;
//}
//
//bool isShenQi(int x)
//{
//	int N, numb[10];
//	for (N = 0; x; N++)
//	{
//		numb[N] = x % 10;
//		x /= 10;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (i == j)
//				continue;
//			if (numb[i] != 0 && isPrime(numb[i] * 10 + numb[j]))
//				return true;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int n = 0;
//	for (int i = a; i <= b; i++)
//	{
//		if (isShenQi(i))
//			n++;
//	}
//	cout << n << endl;
//	return 0;
//}