#include<iostream>
#include<stdio.h>
//class A
//{
//public:
//    void foo()
//    {
//        printf("1");
//    }
//    virtual void fun()
//    {
//        printf("2");
//    }
//};
//class B : public A
//{
//public:
//    void foo()
//    {
//        printf("3");
//    }
//    void fun()
//    {
//        printf("4");
//    }
//};
//int main(void)
//{
//    A a;
//    B b;
//    A* p = &a;
//    p->foo();
//    p->fun();
//    p = &b;
//    p->foo();
//    p->fun();
//    A* ptr = (A*)&b;
//    ptr->foo();
//    ptr->fun();
//    return 0;
//}
//class A
//{
//public:
//    virtual void func(int val = 1)
//    {
//        std::cout << "A->" << val << std::endl;
//    }
//    virtual void test()
//    {
//        func();
//    }
//};
//class B : public A
//{
//public:
//    void func(int val = 0) { std::cout << "B->" << val << std::endl; }
//};
//struct A {
//    void foo() { printf("foo"); }
//    virtual void bar() { printf("bar"); }
//    A() { bar(); }
//};
//struct B :A {
//    void foo() { printf("b_foo"); }
//    void bar() { printf("b_bar"); }
//};
//int main(int argc, char* argv[])
//{
//   /* B* p = new B;
//    p->test();*/
//    A* p = new B;
//    p->foo();
//    p->bar();
//    return 0;
//}
//class A
//{
//public:
//    A()
//    {
//        printf("A ");
//    }
//
//    ~A()
//    {
//        printf("deA ");
//    }
//};
//
//class B
//{
//public:
//    B()
//    {
//        printf("B ");
//    }
//    ~B()
//    {
//        printf("deB ");
//    }
//};
//
//class C : public A, public B
//{
//public:
//    C()
//    {
//        printf("C ");
//    }
//    ~C()
//    {
//        printf("deC ");
//    }
//};
//int main()
//{
//    A* a = new C();
//    delete a;
//    return 0;
//}