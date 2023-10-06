#include<iostream>
#include<queue>
using namespace std;
#include"priority_queue.h"


template<class T>
class Less
{
public:

	bool operator()(const T& x, const T& y)
	{
		return x < y;
	}
};
template<class T>
class Greater
{
public:
	bool operator()(const T& x, const T& y)
	{
		return x > y;
	}
};


int main()
{
	crin::priority_queue<int,vector<int>,Less<int>> q;
	q.push(3);
	q.push(2);
	q.push(1);
	q.push(5);
	q.push(2);

	while (!q.empty())
	{
		cout << q.top() << endl;
		q.pop();
	}


}

