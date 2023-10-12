#include<iostream>
using namespace std;
#include"List.h"
#include"reverse_iterator.h"
#include"vector.h"


class DD
{
public:
	void print()
	{
		cout<<_a<<" "<<_b<< endl;
	}
private:
	int _a;
	int _b;
};
int main()
{
	/*crin::List<int> lt;
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

	crin::List<int> lt2(lt);*/

	/*crin::List<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	crin::List<int>::reverse_iterator ri = lt.rbegin();
	cout<<*ri<<endl;*/
	
	crin::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	crin::vector<int>::reverse_iterator it = v.rbegin();
	while (it != v.rend())
	{
		cout << *it << endl;
		++it;
	}

	return 0;
}