#include"string.h"


int main()
{
	int a = 0;
	int b = 9;
	int& c = a;
	a = b;
	b = c;
	return 0;
}