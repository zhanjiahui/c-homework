#pragma once
#include<iostream>
//date1.h
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	void SetDate(int, int, int);//对数据成员初始化的公有函数
	void Display();//输出公有函数
	int Getyear();
	int GetMonth();
};
void Date::SetDate(int y,int m,int d)
{
	year = y;
	month = m;
	day = d;
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