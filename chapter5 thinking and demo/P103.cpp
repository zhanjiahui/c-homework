#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Student
{
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(const int n, char*p = "Wang");
	void GetName();
	int Getnum();
private:
	int num;
	char name[20];

};
int Student::total=0;//初始化*****
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
int main()
{
	cout << "The number of all students: " << Student::total << endl;
	Student *p = new Student(13);
	cout << "The number of all students: " << Student::total << endl;
	cout << "The number of all students: " << p->total << endl;
	delete p;
	cout << "The number of all students: " << Student::total << endl;
	Student S[2];//定义两个对象，构造函数使用2次
	cout << "The number of all students : " << S[0].total <<endl;
	cout << "The number of all students : " << S[1].total << endl;
	getchar();
	return 0;
}