#include"date5.h"
#include<iostream>
void fun(Date *pDate)
{
	pDate->ModifyDate(2011, 11, 1);
	pDate->Display();
}
int main()
{
	Date DateA(2011);
	DateA.Display();
	fun(&DateA);
	cout << "after calling fun( ) DateA: ";
	DateA.Display();             	//实参对象的值已改变
	getchar();
	return 0;
}