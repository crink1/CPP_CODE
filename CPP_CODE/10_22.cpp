#include<iostream>
using namespace std;

//class A
//{
//public:
//	virtual void fun()
//	{
//		cout<<"A:fun" << endl;
//	}
//	virtual void fun1()
//	{
//		cout << "A:fun1" << endl;
//	}
//};
//
//class B : public A
//{
//	virtual void fun()
//	{
//		cout<<"B:fun" << endl;
//	}
//	virtual void fun2()
//	{
//		cout << "B:fun2" << endl;
//	}
//	virtual void fun3()
//	{
//		cout << "B:fun3" << endl;
//	}
//};
//
//class X :public B
//{
//	virtual void fun2()
//	{
//		cout << "X:fun2" << endl;
//	}
//};
typedef void(*vft)();

void printvf(vft* f)
{
	for (int i = 0; f[i] != 0; i++)
	{
		cout << f[i] << " ";
		vft x = f[i];
		x();
	}
	cout << endl;
}
//32位下运行验证
//int main()
//{
//	
//
//	A a;
//	printvf((vft*)(*(int*)(&a)));
//	B b;
//	printvf((vft*)(*(int*)(&b)));
//	X x;
//	printvf((vft*)(*(int*)(&x)));
//
//	return 0;
//}
//int main()
//{
//	A a;
//	printvf((vft*)(*(long long*)(&a)));
//	B b;
//	printvf((vft*)(*(long long*)(&b)));
//	X x;
//	printvf((vft*)(*(long long*)(&x)));
//
//	return 0;
//}
//32位下运行验证
//int main()
//{
//	
//
//	A a;
//	printvf((vft*)(*(int*)(&a)));
//	B b;
//	printvf((vft*)(*(int*)(&b)));
//	X x;
//	printvf((vft*)(*(int*)(&x)));
//
//	return 0;
//}
//int main()
//{
//	A a;
//	printvf((vft*)(*(long long*)(&a)));
//	B b;
//	printvf((vft*)(*(long long*)(&b)));
//	X x;
//	printvf((vft*)(*(long long*)(&x)));
//
//	return 0;
//}

//class A
//{
//public:
//	virtual void fun()
//	{
//		cout << "A:fun" << endl;
//	}
//	virtual void fun1()
//	{
//		cout << "A:fun1" << endl;
//	}
//};
//
//class B
//{
//	virtual void fun()
//	{
//		cout << "B:fun" << endl;
//	}
//	virtual void fun2()
//	{
//		cout << "B:fun2" << endl;
//	}
//	
//};
//
//class X :public A ,public B
//{
//	virtual void fun()
//	{
//		cout << "X:fun" << endl;
//	}
//	virtual void fun3()
//	{
//		cout << "X:fun3" << endl;
//	}
//};
//
//
//int main()
//{
//	X x;
//	printvf((vft*)(*(int*)&x));
//	B* p = &x;
//	printvf((vft*)(*(int*)p));
//	return 0;
//}s


//class A
//{
//public:
//	virtual void fun()
//	{
//		cout << "A:fun" << endl;
//	}
//	virtual void fun1()
//	{
//		cout << "A:fun1" << endl;
//	}
//};
//
//class B
//{
//	virtual void fun()
//	{
//		cout << "B:fun" << endl;
//	}
//	virtual void fun2()
//	{
//		cout << "B:fun2" << endl;
//	}
//	
//};
//
//class X :public A ,public B
//{
//	virtual void fun()
//	{
//		cout << "X:fun" << endl;
//	}
//	virtual void fun3()
//	{
//		cout << "X:fun3" << endl;
//	}
//};
