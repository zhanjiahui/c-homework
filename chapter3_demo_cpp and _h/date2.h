#pragma once
#include<iostream>
//date2.h
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	void SetDate(int y, int m, int d)//对数据成员初始化的公有函数
	{
		year = y;
		month = m;
		day = d;
	}
	void Display()//输出公有函数
	{
		cout << year << "-" << month << "-" << day << endl;
	}
	int Getyear()
	{
		return year;
	}
	int GetMonth()
	{
			return month;
	}
};




