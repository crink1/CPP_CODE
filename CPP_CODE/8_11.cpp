#include<iostream>
using namespace std;
//
//class A
//{
//	friend class Date;
//public:
//	void print()
//	{
//		cout<<x<<endl;
//	}
//private:
//	int x = 0;
//	static int _a;
//};
//static int _a = 10;
//
//class Date
//{
//	friend istream& operator>>(istream& _cin, Date& d);
//	friend ostream& operator<<(ostream& _cout, Date& d);
//public:
//	Date()
//	{}
//	Date(int year, int month = 1, int day = 1)
//		:_day(day)
//	{}
//	void print()
//	{
//		cout<<_a.x<<endl;
//	}
//private:
//	int _day;
//	A _a;
//	
//};
//
//istream& operator>>(istream& _cin, Date& d)
//{
//	cin >> d._day;
//	return _cin;
//}
//ostream& operator<<(ostream& _cout, Date& d)
//{
//	cout << d._day;
//	return _cout;
//}
//
//int main()
//{
//	Date d;
//	cin >> d;
//	cout<<d<<endl;
//	return 0;
//}


class A
{
public:
	A()
	:x(10)
	{}
	class B
	{
	public:
		void func(const A& a)
		{
			cout<<a.x<<endl;
		}
	};
private:
	int x;
};

int main()
{
	A::B().func(A());
	return 0;
}