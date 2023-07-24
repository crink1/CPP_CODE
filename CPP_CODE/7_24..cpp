//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// Date d2(d1);
//	Date(Date& d)
//	{
//		cout << "Date(Date& d)" << endl;
//
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//	
//private:
//	// ÄÚÖÃÀàĞÍ
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2023, 7, 21);
//	Date d2(d1);
//	Date d3 = d1;
//	return 0;
//}