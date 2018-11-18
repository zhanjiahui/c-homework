#include"Date6.h"
int main()
{
	Date YourBirthday(1990, 10, 17);
	Date MyBirthday(1990, 10, 17);   		//定义对象同时完成对象的初始化
	if (Equal(YourBirthday, MyBirthday))
		cout << "Birthday is the same!\n";
	else
		cout << "Birthday is not the same!\n";
	getchar();
	return 0;
}