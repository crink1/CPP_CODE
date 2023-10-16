//#include<iostream>
//#include<string>
//using namespace std;
//
//class B0 {
//public:
//    virtual void display() {
//        cout << "B0::display0" << endl;
//    }
//};
//
//class B1 :public B0 {
//public:
//    void display() { cout << "B1::display0" << endl; }
//};
//
//class D1 : public B1 {
//public:
//    void display() {
//        cout << "D1::display0" << endl;
//    }
//};
//
//void fun(B0 ptr) {
//    ptr.display();
//}
//
//int main() {
//    B0 b0;
//    B1 b1;
//    D1 d1;
//    fun(b0);
//    fun(b1);
//    fun(d1);
//}
//#include<iostream>
//using namespace std;
//
//class A {
//public:     A(const char* s) { cout << s << endl; }     ~A() {}
//};
//
//class B : virtual public A {
//public:     B(const char* s1, const char* s2) :A(s1) { cout << s2 << endl; }
//};
//
//
//class C : virtual public A {
//public:     C(const char* s1, const char* s2) :A(s1) { cout << s2 << endl; }
//};
//
//class D : public B, public C {
//public:     D(const char* s1, const char* s2, const char* s3, const char* s4) :B(s1, s2), C(s1, s3), A(s1) { cout << s4 << endl; }
//};
//
//int main() {
//	D* p = new D("class A", "class B", "class C", "class D");     delete p;     return 0;
//}