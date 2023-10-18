//#include<iostream>
//using namespace std;
//class A
//{
//
//public:
//
//  void f() { cout << "A::f()" << endl; }
//
//  int a;
//
//};
//
//
//
//class B : public A
//
//{
//
//public:
//
//	void f(int a) { cout << "B::f()" << endl; }
//
//	int a;
//
//};
//
//
//
//int main()
//
//{
//
//	B* b;
//	A a;
//	b = (B*)& a;
//
//	return 0;
//
//}

//class Test{
//public:
//    int a;
//    int b;
//    virtual void fun() {}
//    Test(int temp1 = 0, int temp2 = 0)
//    {
//        a = temp1;
//        b = temp2;
//    }
//    int getA()
//    {
//        return a;
//    }
//    int getB()
//    {
//        return b;
//    }
//};
//
//int main()
//{
//    Test obj(5, 10);
//    // Changing a and b
//    int* pInt = (int*)&obj;
//    *(pInt + 0) = 100;
//    *(pInt + 1) = 200;
//    cout << "a = " << obj.getA() << endl;
//    cout << "b = " << obj.getB() << endl;
//    return 0;
//}
//#include <iostream>
//class Base {
//public:
//    int Bar(char x) {
//        return (int)(x);
//    }
//    virtual int Bar(int x) {
//        return (2 * x);
//    }
//};
//class Derived : public Base {
//public:
//    int Bar(char x) {
//        return (int)(-x);
//    }
//    int Bar(int x) {
//        return (x / 2);
//    }
//};
//int main(void) {
//    Derived Obj;
//    Base* pObj = &Obj;
//    printf("%d,", pObj->Bar((char)(100)));
//    printf("%d,", pObj->Bar(100));
//}
//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//    virtual int foo(int x)
//    {
//        return x * 10;
//    }
//
//    int foo(char x[14])
//    {
//        return sizeof(x) + 10;
//    }
//};
//
//class Derived : public Base
//{
//    int foo(int x)
//    {
//        return x * 20;
//    }
//
//    virtual int foo(char x[10])
//    {
//        return sizeof(x) + 20;
//    }
//};
//
//int main()
//{
//    Derived stDerived;
//    Base* pstBase = &stDerived;
//
//    char x[10];
//    printf("%d\n", pstBase->foo(100) + pstBase->foo(x));
//
//    return 0;
//}
//#include<stdio.h>
//class A
//{
//public:
//    void FuncA()
//    {
//        printf("FuncA called\n");
//    }
//    virtual void FuncB()
//    {
//        printf("FuncB called\n");
//    }
//};
//class B : public A
//{
//public:
//    void FuncA()
//    {
//        A::FuncA();
//        printf("FuncAB called\n");
//    }
//    virtual void FuncB()
//    {
//        printf("FuncBB called\n");
//    }
//};
//void main(void)
//{
//    B	b;
//    A* pa;
//    pa = &b;
//    A* pa2 = new A;
//    pa->FuncA(); 
//        pa->FuncB(); 
//        pa2->FuncA(); 
//        pa2->FuncB();
//    delete pa2;
//}