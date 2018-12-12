﻿#include"people.h"
/////////////////////////////Date类的实现///////////////////////
void Date::Set(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int Date::GetYear()
{
	return year;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}
//////////////////////////Person类的实现//////////////////////////
Person::Person()
{
	strcpy(name, "00");
}
char*Person::GetName()
{
	return name;
}
void Person::Input()
{
	cout << "请输入信息\n";
	cout << "姓名："<<endl;
	cin >> name;
	cout << "编号：" << endl;
	cin >> number;
	int y, m, d;
	cout << "出生日期（年份，月份，日期）";
	cin >> y >> m >> d;
	birthday.Set(y, m, d);
	cout << "性别（m/f):";
	cin >> sex;
}
void Person::Output()
{
	cout << "姓名" << name << endl;
	cout << "编号" << number << endl;
	cout << "性别";
	if (sex == 'm')
		cout << "男" << endl;
	else
		cout << "女" << endl;
	cout << "出生日期：" << birthday.GetYear() << '-' << birthday.GetMonth() << '-' << birthday.GetDay() << endl;
}
/////////////////Student类实现//////////////////////////
void Student::Input()
{
	Person::Input();
	cout << "专业";
	cin >> speciality;
}
void Student::Output()
{
	Person::Output();
	cout << "专业" << speciality << endl;
}
//////////////////Graduate类/////////////////////////////
void Graduate::Input()
{
	Student::Input();
	cout << "研究课题";
	cin >> researchTopic;
}
void Graduate::Output()
{
	Student::Output();
	cout << "研究课题" << researchTopic << endl;
}
/////////////////////////////Teacher类的实现/////////////////
void Teacher::Input()
{
	Person::Input();
	cout << "职称";
	cin >> academicTitle;
}
void Teacher::Output()
{
	Person::Output();
	cout << "职称" << academicTitle << endl;
}
/////////////////////////postgraduateonjob类实现/////////////////
void PostgraduateOnJob::Input()
{
	Graduate::Input();
	cout << "职称";
	cin >> academicTitle;
}
void PostgraduateOnJob::Output()
{
	Graduate::Output();
	cout << "职称" << academicTitle << endl;
}