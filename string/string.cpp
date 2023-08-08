#include"string.h"


int main()
{
	crin::string a("chjsaikcde");
	crin::string b("cde");
	//size_t x = a.find(b.c_str(), 0);

	b.insert(2, 'i');
	return 0;
}