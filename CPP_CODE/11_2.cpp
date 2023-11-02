#include<iostream>
using namespace std;
#include<vector>

//class Person {
//public:
//	virtual void Buy()  { cout << "原价" << endl; }
//};
//class Student : public Person {
//public:
//	virtual void Buy() override { cout << "教育优惠" << endl; }
//};
//void Func(Person& p)
//{
//	p.Buy();
//}
//int main()
//{
//	Person ps;
//	Student st;
//	Func(ps);
//	Func(st);
//	return 0;
//}

//class A {};
//class B : public A {};
//class Person {
//public:
//	virtual A* f() { return new A; }
//};
//class Student : public Person {
//public:
//	virtual B* f() { return new B; }
//};


//class Person {
//public:
//	virtual ~Person() { cout << "~Person()" << endl; }
//};
//class Student : public Person {
//public:
//	virtual ~Student() { cout << "~Student()" << endl; }
//};
//
//int main()
//{
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//	delete p1;
//	delete p2;
//	return 0;
//}
//int getkey(vector<int>& nums, int begin, int end)
//{
//    int r = rand();
//    return nums[r % (end - begin + 1) + begin];
//}
//void qsort(vector<int>& nums, int begin, int end)
//{
//    if (begin >= end)
//    {
//        return;
//    }
//    int key = getkey(nums, begin, end);
//    int left = begin - 1;
//    int right = end + 1;
//    int i = begin;
//    while (i < right)
//    {
//        if (nums[i] > key)
//        {
//            swap(nums[i], nums[--right]);
//
//        }
//        else if (nums[i] < key)
//        {
//            swap(nums[i++], nums[++left]);
//        }
//        else
//        {
//            i++;
//        }
//    }
//    qsort(nums, begin, left);
//    qsort(nums, right, end);
//
//}
//vector<int> sortArray(vector<int>& nums) {
//    srand(time(NULL));
//    qsort(nums, 0, nums.size() - 1);
//    return nums;
//}
//
//int main()
//{
//    vector<int> v = { -4,0,7,4,9,-5,-1,0,-7,-1 };
//    sortArray(v);
//    for (auto i : v)
//    {
//        cout<<i<<endl;
//    }
//    return 0;
//}

//class Person 
//{
//public:
//	virtual void Buy() = 0;
//};
//class Student : public Person 
//{
//public:
//	virtual void Buy() override 
//	{ 
//		cout << "教育优惠" << endl; 
//	}
//};
//class Teacher
//{
//public:
//	virtual void Buy()
//	{
//		cout << "教育优惠" << endl;
//	}
//};
//
//int main()
//{
//
//	//Person p;  纯虚函数不能实例化出对象
//	Student st;
//	Teacher tt;
//	return 0;
//}

//class A
//{
//public:
//
//	virtual void f()
//	{
//		cout<<"f()" << endl;
//	}
//	virtual void f1()
//	{
//		cout << "f1()" << endl;
//	}
//	void f2()
//	{
//		cout << "f2()" << endl;
//	}
//private:
//
//	int _a = 1;
//};
//class B : public A
//{
//public:
//
//	/*virtual void f()
//	{
//		cout<< "B::f()" << endl;
//	}*/
//private:
//	int _b = 2;
//};
//
//void fun(A& a)
//{
//	a.f();
//}
//
//int main()
//{
//	A a;
//	B b;
//	fun(a);
//	fun(b);
//	return 0;
//}

//class A
//{
//	virtual void fun() = 0;
//	
//};
//
//int main()
//{
//	A* a;
//	return 0;
//}

//class A
//{
//
//public:
//
//  A() :m_iVal(0) { test(); }
//
//  virtual void func() { std::cout << m_iVal << " "; }
//
//  void test() { func(); }
//
//public:
//
//  int m_iVal;
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
//    B() { test(); }
//
//    virtual void func()
//
//    {
//
//        ++m_iVal;
//
//        std::cout << m_iVal << " ";
//
//    }
//
//};
//
//
//
//int main(int argc, char* argv[])
//
//{
//
//    A* p = new B;
//
//    p->test();
//
//    return 0;
//
//}

//class A
//
//{
//
//public:
//
//    virtual void f()
//
//    {
//
//        cout << "A::f()" << endl;
//
//    }
//
//};
//
//
//
//class B : public A
//
//{
//
//private:
//
//    virtual void f()
//
//    {
//
//        cout << "B::f()" << endl;
//
//    }
//
//};
//int main()
//{
//    A* pa = (A*)new B;
//
//    pa->f();
//    return 0;
//}
