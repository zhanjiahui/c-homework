#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Student;//向前引用，因为在后面定义的Date类中用到Student类型
class Date
{
	int year, month, day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	void Display(const Student &stu); //成员函数，其形式参数为类Student的对象引用
};
class Student
{
private:
	char*specialty;
public:
	Student(char *pSpec);
	~Student();
	friend void Date::Display(const Student &);//88******
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}
void Date::Display(const Student &stu)
{//其形式参数为类Student的对象引用
	cout << stu.specialty << endl;
	cout << year << "-" << month << "-" << day << endl;
}
Student::Student(char*pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::~Student()
{
	if (specialty)
	{
		delete[]specialty;
	}
}
int main()
{
	Student zhang("computer");
		Date Birthday(1990, 10, 17);
		Birthday.Display(zhang);
		getchar();
		return 0;
}