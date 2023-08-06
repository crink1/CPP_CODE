#include<iostream>
using namespace std;
////class student
////{
////public:
////	student()
////	{
////		age = 10;
////	}
////	student(const student& st)
////	{
////		age = st.age;
////	}
////	void ShowAge()
////	{
////		cout << "hello" << endl;
////	}
////public:
////	int age;
////};
////
////
////int main()
////{
////	student st;
////	st.ShowAge();
////	//p->age = 10;
////	return 0;
////}
//
//typedef int STDataType;
//struct Stack
//{
//public:
//
//	Stack(size_t capacity = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * capacity);
//		if (NULL == _a)
//		{
//			perror("malloc fail");
//			return;
//		}
//		_size = 0;
//		_capacity = capacity;
//		
//	}
//	//拷贝构造
//	Stack(const Stack& st)
//	{
//		_size = st._size;
//		_capacity = st._capacity;
//		_a = (STDataType*)malloc(sizeof(STDataType) * _capacity);
//		if (NULL == _a)
//		{
//			perror("malloc fail");
//			return;
//		}
//		memcpy(_a, st._a, sizeof(STDataType) * _size);
//		
//	}
//	//赋值运算符重载
//	Stack& operator=(const Stack& st)
//	{
//		_size = st._size;
//		_capacity = st._capacity;
//		_a = (STDataType*)malloc(sizeof(STDataType) * _capacity);
//		if (NULL == _a)
//		{
//			perror("malloc fail");
//		}
//		memcpy(_a, st._a, sizeof(STDataType) * _size);
//		return *this;
//	}
//
//	bool STEmpty()
//	{
//		
//		return _size == 0;
//	}
//
//	void STPush(const STDataType& x)
//	{
//		
//		if (_size == _capacity)
//		{
//			size_t newcapacity = _capacity == 0 ? 4 : _capacity * 2;
//			STDataType* tmp = (STDataType*)realloc(_a, sizeof(STDataType) * newcapacity);
//			if (NULL == tmp)
//			{
//				perror("realloc fail");
//				return;
//			}
//			_a = tmp;
//			_capacity = newcapacity;
//
//		}
//		_a[_size] = x;
//		_size++;
//	}
//
//	
//	~Stack()
//	{
//		if (_a)
//		{
//			free(_a);
//			_a = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	STDataType* _a;
//	size_t _size;
//	size_t _capacity;
//};
//
//
//
//int main()
//{
//	Stack st;
//	st.STPush(1);
//	st.STPush(5);
//	st.STPush(4);
//	st.STPush(3);
//	st.STPush(2);
//	Stack st1;
//	st1 = st;
//
//
//	return 0;
//}

//Date& operator=(Date& left, const Date& right)
//{
//    if (&left != &right)
//    {
//        left._year = right._year;
//        left._month = right._month;
//        left._day = right._day;
//    }
//    return left;
//}
//
//
class Date
{
public:
    Date(int year = 1970, int month = 1, int day = 1)
    {
        _year = year;
        _month = month;
        _day = day;
    }
    void Print()
    {
        cout << "Print()" << endl;
        cout << "year:" << _year << endl;
        cout << "month:" << _month << endl;
        cout << "day:" << _day << endl << endl;
    }
    void Print() const //相当于void Print(const Data* this)
    {
        
        cout << "Print()const" << endl;
        cout << "year:" << _year << endl;
        cout << "month:" << _month << endl;
        cout << "day:" << _day << endl << endl;
    }
private:
    int _year;
    int _month;
    int _day;
};

int main()
{
    Date d1;
    const Date d2(2000, 8, 8);
    d2.Print();

    return 0;
}