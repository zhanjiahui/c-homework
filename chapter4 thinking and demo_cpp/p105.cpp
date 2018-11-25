#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Student
{
public:
	Student() { total++; }
	~Student() { total--; }
	Student(int n,char*p = "Wang");
	void GetName();
	int Getnum();
	static void Print();
private:
	static int total;
	int num;
	char name[20];
};
int Student::total = 0;//初始化*****
Student::Student(int n, char*p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
void Student::Print()
{
	cout << "The number of all students: " << total << endl;
}
int main()
{
	Student::Print();
	Student *p = new Student(13);
	Student::Print();
	p->Print();
	delete p;
	p->Print();
	Student S[2];//定义两个对象，构造函数使用2次
	Student::Print();
	Student::Print();
	getchar();
	return 0;
}