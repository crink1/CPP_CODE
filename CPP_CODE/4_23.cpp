//#include<iostream>
//
//using namespace std;
//#define add(x,y) ((x) + (y))
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//typedef void(*fun)(int);
//
//class Base {
//public:
//    virtual void show() {
//        std::cout << "Base class" << std::endl;
//    }
//};
//
//class Derived : public Base {
//public:
//    void show() {
//        std::cout << "Derived class" << std::endl;
//    }
//};
//
//int main() {
//    Base* basePtr = new Derived;
//
//    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
//
//    if (derivedPtr) {
//        derivedPtr->show(); // 输出：Derived class
//    }
//    else {
//        std::cout << "Failed to cast to Derived class" << std::endl;
//    }
//
//    delete basePtr;
//
//    return 0;
//}

//void test1()
//{
//	int x = 1;
//	//隐式类型转换
//	double y = x;
//	cout << y << endl;
//
//	int* p = &x;
//	//用户自己显示类型转换
//	int addr = (int)p;
//	cout << addr << endl;
//
//	/*int x = 1;
//	double y = static_cast<double>(x);
//	cout << y << endl;*/
//
//	/*int* p = &x;
//	int addr = reinterpret_cast<int>(p);
//	cout << addr << endl;*/
//
//
//}


//void test2()
//{
//	/*volatile const int i = 0;
//	int* p = (int*) &i;
//	*p = 19;
//	cout << i << endl;
//	cout << *p << endl;*/
//
//	volatile const int i = 0;
//	int* p = const_cast<int*>(&i);
//	*p = 19;
//	cout << i << endl;
//	cout << *p << endl;
//
//}
//
//
//class A
//{
//public:
//	virtual void f() {}
//};
//
//class B : public A
//{
//
//};
//
//void fun(A* a)
//{
//	B* pb = dynamic_cast<B*>(a);
//	cout << pb << endl;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	A a;
//	B b;
//	fun(&a);
//	fun(&b);
//
//	return 0;
//}