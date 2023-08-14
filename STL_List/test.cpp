#include<iostream>
#include"List.h"
using namespace std;

int main()
{
	crin::List<int> lt;
	lt.push_back(0);
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	
	crin::List<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	lt.insert(lt.begin()++, 7);
	lt.erase(lt.begin());
	for (auto n : lt)
	{
		cout << n << " ";
	}

	crin::List<int> lt2(lt);
	return 0;
}