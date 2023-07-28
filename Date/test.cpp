#include"date.h"

void TestDate1()
{
	Date d1(2023, 6, 23);
	Date d2;

	d1.Print();
	d2.Print();

	Date d3(2018, 2, 29);
	d3.Print();

	Date d4(2023, 13, 3);
	d4.Print();
}

void TestDate2()
{
	Date d1(2023, 7, 6);

	Date d2(d1);

	d1.Print();
	d2.Print();

	Date d3(2023, 7, 19);

	d1 = d2 = d3;
	d1.Print();
	d2.Print();
	d3.Print();

}

void TestDate3()
{
	Date d1(2023, 9, 27);
	d1 += 20000;
	d1.Print();

	Date d2(2023, 9, 27);


	Date ret;

	ret = d2 + 20000;

	ret.Print();
}

void TestDate4()
{
	Date d1(2023, 9, 27);
	d1 -= 20000;
	d1.Print();

	Date d2(2023, 9, 27);
	d2 += -200;
	d2.Print();

	Date d3(2023, 9, 27);
	d3 -= -200;
	d3.Print();
}

void TestDate5()
{
	Date d1(2023, 9, 27);
	Date ret1 = d1++;

	ret1.Print();
	d1.Print();

	Date ret2 = ++d1;

	ret2.Print();
	d1.Print();
}

void TestDate6()
{
	Date d1(2023, 9, 27);
	Date d2(2000, 1, 1);

	cout << d1 - d2 << endl;
}


int main()
{
	TestDate6();

	return 0;
}
