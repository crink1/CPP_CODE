#include<iostream>
using namespace std;

//inline int Add(int a, int b)
//{
//	return a + b;
//}
//
//int TestAuto()
//{
//	return 10;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//}
//int main()
//{
//	int ret = 0;
//	ret = Add(1, 2);
//	cout<<ret<<endl;
//	return 0;
//}

//auto不能作为函数参数
//void test(auto a)
//{
//
//}

//int main()
//{
//	auto a = 10;
//	auto b = 'a';
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//
//}

//int main()
//{
//	int a = 10;
//	auto b = &a;
//	auto c = &a;
//	auto& d = a;
//	cout << typeid(b).name() << endl;
//    cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	return 0;
//}

//int main()
//{
//	auto a = 0, b = 10;
//	//auto c = 20, d = 114.514;
//
//	auto arr[10] = { 0 };
//	return 0;
//}


//范围for循环
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (auto& e : arr)
//	{
//		e += 1;
//	}
//	for (auto e : arr)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}

//void TestFor(int array[])
//{
//	for (auto& e : array)
//		cout << e << endl;
//}

//void func(int)
//{
//	cout << "f(int)" << endl;
//}
//void func(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//int main()
//{
//	func(0);
//	func(nullptr);
//	func((int*)NULL);
//	return 0;
//}

//int main()
//{
//	int* ptr = NULL;
//	func(ptr);
//
//	return 0;
//}



