#include "data5.h"
#include <iostream>
void fun(Date &pDate)//对象指针
{
	pDate.ModifyDate(2011, 11, 1);
	pDate.Display();
}
int main()
{
	Date DateA(2010);
	DateA.Display();
	fun(DateA);
	cout << "after calling fun() DateA:";
	DateA.Display();
	getchar();
	return 0;
}