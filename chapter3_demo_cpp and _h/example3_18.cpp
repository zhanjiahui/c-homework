#include "date5.h"
#include<iostream>
void fun(Date DateVar)
{
	DateVar.ModifyDate(2011,11,1);
	DateVar.Display();
}
int main()
{
	Date DateA;
	DateA.Display();
	fun(DateA);
	cout << "after calling fun() DateA:";
	DateA.Display();
	getchar();
	return 0;
}