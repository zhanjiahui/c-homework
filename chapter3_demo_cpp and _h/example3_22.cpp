#include"date5.h"
#include<iostream>
bool Equal(Date &DateA, Date &DateB)
{
	return (
		DateA.GetYear() == DateB.GetYear()
	&&DateA.GetMonth() == DateB.GetMonth()
	&&DateA.GetDay() == DateB.GetDay());
}
int main()
{
	Date YourBirthday(1990, 10, 17);
	Date MyBirthday(1991, 10, 17);
	if (Equal(YourBirthday, MyBirthday))
		cout << "Birthday is the same!\n";
	else
		cout << "Birthday is not the same!\n";
	getchar();
	return 0;
}