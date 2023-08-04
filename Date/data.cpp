#include"date.h"

Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	
	return *this;
}


int Date::GetMonthDay(int year, int month)
{
	const static int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (month == 2&& ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		return 29;
	}

	return monthArray[month];
}

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
	if (month < 1 || month > 12 || day < 1 || day > GetMonthDay(year, month))
	{
		cout << "日期不合法" << endl;
	}
	
}

void Date::Print() const
{
	cout << _year << "年" << _month << "月" << _day << "日" << endl;
}

bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool Date::operator<(const Date& d)
{
	
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year && _month < d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day < d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}
bool Date::operator>(const Date& d)
{
	return !(*this < d);
}
bool Date::operator>=(const Date& d) 
{
	return !(*this <= d);
}
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return (*this) -= (-day);
	}
	_day = _day + day;
	
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}

Date Date::operator+(int day)
{
	Date tmp = *this;
	tmp += day;
	return tmp;
}
Date& Date::operator-=(int day)
{
	if (day < 0)
	{

		return (*this) += (-day);
	}
	_day = _day - day;
	while (_day < 0)
	{
		_day += GetMonthDay(_year, _month);
		_month--;
		if (_month == 0)
		{
			_year--;
			_month = 12;
		}
	}
	return *this;
}
Date Date::operator-(int day)
{
	Date tmp = *this;
	tmp -= day;
	return tmp;
}

Date& Date::operator++()
{
	++_day;
	if (_day > GetMonthDay(_year, _month))
	{
		_day -=GetMonthDay(_year, _month);
		_month++;
		if (_month > 12)
		{
			_year++;
			_month = 1;
		}
	}

	return *this;
}

Date Date::operator++(int)
{
	Date tmp = *this;
	++(*this);
	return tmp;
}

Date& Date::operator--()
{
	--_day;
	if (_day < 1)
	{
		--_month;
		if (_month < 1)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date::operator--(int)
{
	Date tmp = *this;
	--(*this);
	return tmp;
}

int Date::operator-(const Date& d)
{
	Date Max = *this;
	Date Min = d;
	if (Max < Min)
	{
		Max = d;
		Min = *this;
	}
	int n = 0;
	while (Max >= Min)
	{
		Min++;
		n++;
	}
	return n;
}

