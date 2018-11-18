#pragma once
#include<iostream>
using namespace std;
class Date
{
	int year, month, day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &date);
	~Date();
	int  GetYear();
	int  GetMonth();
	int  GetDay();
	void Display();
	void ModifyDate(int, int, int);//修改函数
};
Date::Date(int y, int m, int d)  			//普通构造函数的定义
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}

Date::Date(const Date &date)		    //拷贝构造函数的定义
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Constructor called.\n";
}

Date::~Date()
{
	cout << "Destructor called.\n";
}

int Date::GetYear()                    //公有成员函数，提取year变量值
{
	return year;
}
int Date::GetMonth()                  //公有成员函数，提取month变量值
{
	return month;
}
int Date::GetDay()                    //公有成员函数，提取day变量值
{
	return day;
}
void Date::Display()           		   //输出函数的定义
{
	cout << year << "-" << month << "-" << day << endl;
}

void Date::ModifyDate(int y, int m, int d)
{
	year = y;//修改函数的定义
	month = m;
	day = d;
}