#pragma once
#include<iostream>
//date3.h
using namespace std;
class Date
{
	int year;
	int month;
	int day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &date);//拷贝构造函数声明
	void Display();//输出公有函数
	int Getyear();
	int GetMonth();
	int GetDay();
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}
Date::Date(const Date &date)
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Constructor called.\n";
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
int Date::Getyear()
{
	return year;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}
