#pragma once
#ifndef _PERSON
#define _PERSON
#include <iostream>
#include <string>
using namespace std;
//////////////////////Date类///////////////////////////
class Date
{
protected:
	int year;
	int month;
	int day;
public:
	void Set(int y, int m, int d);
	int GetYear();
	int GetMonth();
	int GetDay();
};
////////////////////Person类////////////////
class Person
{
protected:
	char name[20];
	char number[10];
	char sex;
	Date birthday;//类的组合
public:
	Person();//构造函数
	void Input();
	void Output();
	char*GetName();
};
//////////////////Student类////////////////////
class Student :virtual public Person//虚基类继承方式，
{									//防止与teacher都继承person造成的重复拷贝
protected:
	char speciality[20];
public:
	void Input();//重载了
	void Output();
};
///////////////Graduate类////////////////////////
class Graduate :virtual public Student//public继承
{
protected:
	char researchTopic[50];//研究课题
public:
	void Input();
	void Output();
};
///////////////////Teacher类////////////////////////
class Teacher:virtual public Person
{
protected:char academicTitle[20];//教师职称
public:
	void Input();
	void Output();
};
class PostgraduateOnJob :public Graduate, public Teacher
{
public:
	void Input();
	void Output();
};
#endif // !_PERSON
