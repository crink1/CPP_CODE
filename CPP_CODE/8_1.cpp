//#include<iostream>
//using namespace std;
//
//void test1()
//{
//	string s1("hello");
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout<<s1[i]<<" ";
//	}
//}
//
//
//void test2()
//{
//	string s1("hello");
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << (*it) << " ";
//		it++;
//	}
//
//	it = s1.begin();
//	while (it != s1.end())
//	{
//		*it = 'a';
//		it++;
//	}
//
//	it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << (*it) << " ";
//		it++;
//	}
//}
//
//void test3()
//{
//
//	string s1("hello");
//	//string::reverse_iterator rit = s1.rbegin();
//	auto rit = s1.rbegin();
//	/*while (rit != s1.rend())
//	{
//		cout<<*rit<<" ";
//		rit++;
//	}*/
//
//	for (auto ch : s1)
//	{
//		cout<<ch<<" ";
//	}
//	for (auto& ch : s1)
//	{
//		ch++;
//	}
//	cout<<s1<<endl;
//}
//
//void test4(const string& s)
//{
//	string::const_iterator cit = s.begin();
//	while (cit != s.end())
//	{
//		cout << (*cit) << " ";
//		cit++;
//	}
//}
//
//
//int main()
//{
//	string s1("hello");
//	test1();
//	//test2();
//	//test3();
//	//test4(s1);
//	return 0;
//}