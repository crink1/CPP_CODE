#pragma once
#include<iostream>

using namespace std;

class Date
{
public:
	int GetMonthDay(int year, int month);

	Date(int year = 1, int month = 1, int day = 1);

	void Print() const;

	bool operator==(const Date& d);
	bool operator<(const Date& d);
	bool operator<=(const Date & d);
	bool operator>(const Date& d);
	bool operator>=(const Date& d);
	bool operator!=(const Date& d);

	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);

	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);

	int operator-(const Date& d);
private:
	int _year;
	int _month;
	int _day;
};
