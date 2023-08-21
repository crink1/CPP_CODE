#include"vector.h"

using namespace crin;
void test_vector1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		*it *= 10;
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_vector2()
{
	int i = 0;
	int j(1);
	int k = int(2);

	vector<int*> v1;
	v1.resize(10);

	vector<string> v2;
	//v2.resize(10, string("xxx"));
	v2.resize(10, "xxx");

	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	for (auto e : v2)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_vector3()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	vector<int>::iterator it = v.begin() + 2;
	v.insert(it, 30);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	//v.insert(v.begin(), 30);
	v.insert(v.begin() + 3, 30);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}





int main()
{
	test_vector1();
	return 0;
}