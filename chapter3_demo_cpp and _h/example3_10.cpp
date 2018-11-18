﻿#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	Date(int y = 2000, int m = 1, int d = 1);   		    //构造函数声明，提供默认参数值
	void Display();
};
Date::Date(int y, int m, int d)             		//函数定义时首部不能再提供默认参数值
{
	cout << "Executing constructor…" << endl;
	year = y;
	month = m;
	day = d;
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
int main()
{
	Date initiateday;
	Date newday(2016);
	Date today(2006, 10, 17);
	cout << "Initiateday is:";
	initiateday.Display();
	cout << "Newday is:";
	newday.Display();
	cout << "Today is";
	today.Display();
	getchar();
	return 0;

}