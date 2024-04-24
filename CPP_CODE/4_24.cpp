//#include <iostream>
//
//using namespace std;
//template <class T>
//void test(T a)
//{
//	cout << a << endl;
//}
//class A
//{
//public:
//	void fun()
//	{
//		cout << "fun" << endl;
//	}
//	 virtual ~A()
//	{
//		cout << "~A" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		cout << "fun()" << i << endl;
//	}
//	virtual ~B()
//	{
//		cout << "~B" << endl;
//	}
//};
//
//int main()
//{
//	//test("dwag");
//	
//	A* p =  new B;
//	p->fun();
//	delete p;
//	return 0;
//}

//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        string str = strs[0];
//        for (int i = 1; i < strs.size(); i++)
//        {
//            if (strs[i] == "")
//            {
//                return "";
//
//            }
//            int j = 0;
//            while (str[j] == strs[i][j])
//            {
//                j++;
//            }
//            if (j == 0)
//            {
//                return "";
//            }
//            str = str.substr(0, j);
//        }
//        return str;
//
//    }
//};class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        string str = strs[0];
//        for (int i = 1; i < strs.size(); i++)
//        {
//            if (strs[i] == "")
//            {
//                return "";
//
//            }
//            int j = 0;
//            while (str[j] == strs[i][j])
//            {
//                j++;
//            }
//            if (j == 0)
//            {
//                return "";
//            }
//            str = str.substr(0, j);
//        }
//        return str;
//
//    }
//};