//#include<iostream>
//using namespace std;

//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//
//void func()
//{
//	cout << "void func()" << endl;
//}
//
//int main()
//{
//	Base b1;
//	Base b2;
//
//	static int a = 0;
//	int b = 0;
//	int* p1 = new int;
//	const char* p2 = "hello world";
//	printf("静态区:%p\n", &a);
//	printf("栈:%p\n", &b);
//	printf("堆:%p\n", p1);
//	printf("代码段:%p\n", p2);
//	printf("虚表:%p\n", *((int*)&b1));
//	printf("虚函数地址:%p\n", &Base::func1);
//	printf("普通函数地址:%p\n", func);
//
//	return 0;
//}

//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//	void func5() { cout << "Derive::func5" << endl; }
//private:
//	int b;
//};
//
//class X :public Derive {
//public:
//	virtual void func3() { cout << "X::func3" << endl; }
//};

// 虚函数的地址一定会被放进类的虚函数表吗？是的
//int main()
//{
//	Base b;
//	Derive d;
//	X x;
//
//	Derive* p = &d;
//	p->func3();
//
//	p = &x;
//	p->func3();
//
//	return 0;
//}

// 打印虚表
//typedef void (*VFUNC)();
////void PrintVFT(VFUNC a[])
//void PrintVFT(VFUNC* a)
//{
//	for (size_t i = 0; a[i] != 0; i++)
//	{
//		printf("[%d]:%p->", i, a[i]);
//		VFUNC f = a[i];
//		f();
//		//(*f)();
//	}
//	printf("\n");
//}
//
//int main()
//{
//	void (*f1)();
//	VFUNC f2;
//
//	cout << sizeof(long long) << endl;
//
//	Base b;
//	PrintVFT((VFUNC*)(*((long long*)&b)));
//
//	Derive d;
//	X x;
//
//	// PrintVFT((VFUNC*)&d);
//	PrintVFT((VFUNC*)(*((long long*)&d)));
//
//	PrintVFT((VFUNC*)(*((long long*)&x)));
//
//	return 0;
//}

//class Base1 {
//public:
//	virtual void func1() { cout << "Base1::func1" << endl; }
//	virtual void func2() { cout << "Base1::func2" << endl; }
//private:
//	int b1;
//};
//
//class Base2 {
//public:
//	virtual void func1() { cout << "Base2::func1" << endl; }
//	virtual void func2() { cout << "Base2::func2" << endl; }
//private:
//	int b2;
//};
//
//class Derive : public Base1, public Base2 {
//public:
//	virtual void func1() 
//	{ 
//		cout << "Derive::func1" << endl;
//	}
//
//	virtual void func3() { cout << "Derive::func3" << endl; }
//private:
//	int d1;
//};
//
//int main()
//{
//	//Derive d;
//	//PrintVFT((VFUNC*)(*(int*)&d));
//
//	////PrintVFT((VFUNC*)(*(int*)((char*)&d+sizeof(Base1))));
//	//Base2* ptr = &d;
//	//PrintVFT((VFUNC*)(*(int*)ptr));
//
//	Derive d;
//	Base1* p1 = &d;
//	p1->func1();
//
//	Base2* p2 = &d;
//	p2->func1();
//
//	return 0;
//}

//class A
//{
//public:
//	virtual void func1() 
//	{ 
//		cout << "A::func1" << endl;
//	}
//public:
//	int _a;
//};
//
////class B : public A
//class B : virtual public A
//{
//public:
//	virtual void func1()
//	{
//		cout << "B::func1" << endl;
//	}
//
//	virtual void func3()
//	{
//		cout << "B::func3" << endl;
//	}
//
//public:
//	int _b;
//};
//
////class C : public A
//class C : virtual public A
//{
//public:
//	virtual void func1()
//	{
//		cout << "C::func1" << endl;
//	}
//
//	virtual void func5()
//	{
//		cout << "C::func5" << endl;
//	}
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	virtual void func1()
//	{
//		cout << "D::func1" << endl;
//	}
//
//	virtual void func2()
//	{
//		cout << "D::func2" << endl;
//	}
//public:
//	int _d = 1;
//};
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	return 0;
//}


//class Base {
//public:
//	Base()
//		:a(10)
//	{
//
//	}
//
//	inline virtual void func1() { cout << "Base::func1" << endl; }
//	//virtual static void func2() { cout << "Base::func2" << endl; }
//private:
//	int a = 0;
//};
//
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//	void func5() { cout << "Derive::func5" << endl; }
//private:
//	int b;
//};
//
//int main()
//{
//	Base* ptr = new Base;
//	ptr->func1();
//
//	Base b;
//	b.func1();
//
//	return 0;
//}