#include "date5.h"
#include <iostream>
Date &fun(Date &pDate)
{
	pDate.ModifyDate(2012, 5, 1);
	cout << "reference pDate:\n";
	pDate.Display();
	return pDate;
}
int main()
{
	Date DateA(2011), tDate;
	cout << "Before right Fun, DataA:\n";
	DateA.Display();
	cout << "Before right Fun, tDate:\n";
	tDate.Display();
	tDate = fun(DateA);
	cout << "After right Fun, DateA:\n";
	tDate.Display();
	fun(DateA) = Date(1998, 10, 5);
	cout << "After lefft fun,DateA:\n";
	DateA.Display();
	cout << "After left Fun, tDate:\n";
	tDate.Display();
	getchar();
	return 0;
}