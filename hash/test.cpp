#include<iostream>
#include<bitset>
#include<vector>
#include<string>
using namespace std;

#include"bitset.h"
#include"BloomFilter.h"
//int main()
//{
//	try
//	{
//		std::bitset<100> bs;
//		bs.set(40);
//		bs.set(39);
//
//		cout << bs.test(38) << endl;
//		cout << bs.test(39) << endl;
//		cout << bs.test(40) << endl;
//		cout << bs.test(41) << endl;
//		cout << bs.test(42) << endl << endl;
//
//		cout << bs.to_string() << endl;
//
//		bs.reset(40);
//
//		cout << bs.test(38) << endl;
//		cout << bs.test(39) << endl;
//		cout << bs.test(40) << endl;
//		cout << bs.test(41) << endl;
//		cout << bs.test(42) << endl << endl;
//
//		std::bitset<0xffffffff> bigbs1;
//		/*std::bitset<-1> bigbs2;*/
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,4,7,9,44,88,1,4,88,99,78,5,7 ,7,7,7 };
//	crin::twobitset<100> bs;
//	for (auto e : a)
//	{
//		bs.set(e);
//	}
//	bs.print();
//
//	return 0;
//}

void TestBF1()
{
	BloomFilter<100> bf;
	bf.Set("��˽�");
	bf.Set("ɳ��");
	bf.Set("�����");
	bf.Set("������");

	cout << bf.Test("��˽�") << endl;
	cout << bf.Test("ɳ��") << endl;
	cout << bf.Test("�����") << endl;
	cout << bf.Test("������") << endl;
	cout << bf.Test("������1") << endl;
	cout << bf.Test("������2") << endl;
	cout << bf.Test("������ ") << endl;
	cout << bf.Test("̫�׾���") << endl;
}

int main()
{
	TestBF1();
	return 0;
}