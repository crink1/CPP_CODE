#include<iostream>
using namespace std;

//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int Add(const int& left, const int& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add<int>(a1, d1);//��ʾʵ����
//	return 0;
//}

//template<class T>
//class A
//{
//public:
//	void print()
//	{
//		cout<<_a<<endl;
//	}
//	~A();
//
//private:
//	T _a;
//};
//// ע�⣺��ģ���к�������������ж���ʱ����Ҫ��ģ������б�
//template<class T>
//A<T>::~A()
//{
//	
//}
//
//int main()
//{
//	A<int> a;
//	A<char> a;
//	return 0;
//}

//void Test()
//{
//	
//	string s("hello, world!");
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(10, 'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(15);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void test()
//{
//	string s("hello world");
//	s.push_back('!');
//	s.push_back('!');
//	s.append(" hello");
//	s += " hello";
//	cout << s << endl;
//	cout << s.c_str() << endl;   // ��C���Եķ�ʽ��ӡ�ַ���
//
//	string file("string.cpp");
//	size_t pos = file.rfind('.');
//	string suffix(file.substr(pos, file.size() - pos));
//	cout << suffix << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}