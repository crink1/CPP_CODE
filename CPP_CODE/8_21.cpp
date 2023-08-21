#include<iostream>
#include<vector>
using namespace std;
//vector<int> v1;                               
//vector<int> v2(4, 100);                       
//vector<int> v3(v2.begin(), v2.end());  
//vector<int> v4(v3);                       
//
//int arr[] = { 16,2,77,29 };
//vector<int> fifth(arr, arr + sizeof(arr) / sizeof(int));

//void test(const vector<int> v)
//{
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//void Test()
//{
//	vector<int> v;
//
//	for (int i = 1; i < 10; i++)
//		v.push_back(i);
//
//	v.resize(5);
//	v.resize(8, 100);
//	v.resize(12);
//
//	cout << "v contains:";
//	for (size_t i = 0; i < v.size(); i++)
//		cout << ' ' << v[i];
//	cout << '\n';
//}

void Test()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	v.pop_back();
	v.pop_back();

	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}
int main()
{
	Test();
	return 0;
}