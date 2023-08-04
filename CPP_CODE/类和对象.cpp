#include<iostream>
#include<assert.h>
using namespace std;
typedef int STDataType;

//struct Stack
//{
//public:
//	Stack()
//	{
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//	Stack(size_t capacity)
//	{
//		_a = nullptr;
//		_size = 0;
//		_capacity = capacity;
//		
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
//			int newcapacity = _capacity == 0 ? 4 : _capacity * 2;
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
//	void STDestroy()
//	{
//		
//		free(_a);
//		_a = NULL;
//		_capacity = 0;
//		_size = 0;
//	}
//
//private:
//	STDataType* _a;
//	int _size;
//	int _capacity;
//};
//
//int main()
//{
//	Stack st;
//	st.STInit(4);
//	st.STPush(1);
//	st.STDestroy();
//	return 0;
//}


//class student
//{
//public:
//	void ShowAge()
//	{
//		cout << age << endl;
//	}
//public:
//	int age=2;
//};
//
//int main()
//{
//	student st;
//	st.age = 10;
//	st.ShowAge();
//	return 0;
//}

//class student
//{
//public:
//	void ShowAge()
//	{
//		cout << "hello" << endl;
//	}
//public:
//	int age;
//};
////
//
//int main()
//{
//	student* p = nullptr;
//	p->ShowAge();
//	//p->age = 10;
//	return 0;
//}


//class age
//{
//public:
//	void ShowAge()
//	{
//		cout << age << endl;
//	}
//	void ShowAge(age* this)
//	{
//		cout << this.age << endl;
//	}
//public:
//	int age;
//};
//
//int main()
//{
//	age a1;
//	age a2;
//	a1.age = 10;
//	a2.age = 20;
//	a1.ShowAge();
//	a1.ShowAge(age* this);
//	a2.ShowAge();
//	return 0;
//}


//struct Stack
//{
//public:
//	Stack()
//	{
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//	Stack(size_t capacity)
//	{
//		_a = nullptr;
//		_size = 0;
//		_capacity = capacity;
//
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
//			int newcapacity = _capacity == 0 ? 4 : _capacity * 2;
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
//private:
//	STDataType* _a;
//	int _size;
//	size_t _capacity;
//};
//
//int main()
//{
//	Stack st;
//	st.STPush(1);
//	st.STPush(2);
//	return 0;
//
//}