#include<iostream>

using namespace std;

//class People
//{
//public:
//	void print()
//	{
//		cout << name << endl;
//		cout << age << endl;
//
//	}
//
//protected:
//
//	string name = "peo";
//	int age = 1;
//};
//
//
//class goodman : public People
//{
//public:
//
//	void f()
//	{
//		cout<< name <<endl;
//	}
//private:
//	string name = "good";
//};
//
//class badman : public People
//{
//protected:
//	string name = "bad";
//};
//
//int main()
//{
//	goodman g;
//	badman b;
//	
//	g.print();
//	g.f();
//	b.print();
//	return 0;
//}


//class People
//{
//protected:
//	string name;
//	int age;
//	char* sex;
//	
//};
//
//class man1 : public People
//{
//protected:
//	double mark;
//};
//
//int main()
//{
//
//
//	man1 m;
//	// 1.���������Ը�ֵ���������/ָ��/����
//	People p0 = m;
//	People* p = &m;
//	People& p1 = m;
//
//	//2.��������ܸ�ֵ�����������
//	//man1 m1 = p0;
//	
//	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ��
//	man1* m1;
//	m1 = (man1*)p; // �������ת��ʱ��Ȼ���ԣ����ǻ����Խ����ʵ���
//	return 0;
//
//}
//class Person
//{
//public:
//    Person(const char* name = "peter")
//        : _name(name)
//    {
//        cout << "Person()" << endl;
//    }
//
//    Person(const Person& p)
//        : _name(p._name)
//    {
//        cout << "Person(const Person& p)" << endl;
//    }
//
//    Person& operator=(const Person& p)
//    {
//        cout << "Person operator=(const Person& p)" << endl;
//        if (this != &p)
//            _name = p._name;
//
//        return *this;
//    }
//
//    ~Person()
//    {
//        cout << "~Person()" << endl;
//    }
//protected:
//    string _name; // ����
//};
//class Student : public Person
//{
//public:
//    Student(const char* name, int num)
//        : Person(name)
//        , _num(num)
//    {
//        cout << "Student()" << endl;
//    }
//
//    Student(const Student& s)
//        : Person(s)
//        , _num(s._num)
//    {
//        cout << "Student(const Student& s)" << endl;
//    }
//
//    Student& operator = (const Student& s)
//    {
//        cout << "Student& operator= (const Student& s)" << endl;
//        if (this != &s)
//        {
//            Person::operator =(s);
//            _num = s._num;
//        }
//        return *this;
//    }
//
//    ~Student()
//    {
//        cout << "~Student()" << endl;
//    }
//protected:
//    int _num; //ѧ��
//};
//void Test()
//{
//    Student s1("crin", 10);
//    Student s2(s1);
//    Student s3("k1", 6);
//    s1 = s3;
//}
//int main()
//{
//    Test();
//    return 0;
// }
//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name; // ����
//};
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
//};
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//void main()
//{
//	Person p;
//	Student s;
//	Display(p, s);
//}


//class A
//{
//public:
//	void p()
//	{
//		cout<<a<<endl;
//	}
//public:
//	static int a;
//
//};
//
//class B : public A
//{
//protected:
//	int testb;
//};
//
//class C :public A
//{
//protected:
//	int testc;
//};
//
//
//int A::a = 7;
//
//int main()
//{
//
//	B b1;
//	B b2;
//	C c1;
//	cout << A::a << endl;
//	C::a = 10;
//	cout << A::a << endl;
//
//
//	return 0;
//}

//class A {};
//
//class B :public A{};
//
//class C :public A{};
//
//class D :public B, public C{};



//class Person
//{
//public:
//	string _name; 
//};
//class Student : public Person
//{
//protected:
//	int _num;
//};
//class Teacher : public Person
//{
//protected:
//	int _id; 
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse;
//};
//void Test()
//{
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a;
//	a._name = "peter";
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//}
//class Person
//{
//public:
//	string _name; // ����
//};
//class Student : virtual public Person
//{
//protected:
//	int _num;
//};
//class Teacher : virtual public Person
//{
//protected:
//	int _id; 
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; 
//};
//void Test()
//{
//	Assistant a;
//	a._name = "peter";
//}

class A
{
public:
	int _a;
};
 //class B : public A
class B : virtual public A
{
public:
	int _b;
};
 //class C : public A
class C : virtual public A
{
public:
	int _c;
};
class D : public B, public C
{
public:
	int _d;
};
int main()
{
	D d;
	d.B::_a = 1;
	d.C::_a = 2;
	d._b = 3;
	d._c = 4;
	d._d = 5;
	return 0;
}