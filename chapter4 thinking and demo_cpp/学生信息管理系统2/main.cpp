#include<iostream>
using namespace std;
#include "student.h"
const int N = 10;
void menu();
void OutPutStu(const Student *array);/////指针形参前加const保护形参
void InPutStu(Student*array);
int SearchStu(const Student*array, char*na);
bool InsertStu(Student*array);
bool DeleteStu(Student*array, char*na);
/////////////////////////////////////////////////
int main()
{
	Student array[N];
	int choice;
	char na[20];
	do {
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice > 0&&choice<=5)
		{
			switch (choice)
			{
			case 1:InPutStu(array); break;
			case 2:cout << "Input the name searched:" << endl;
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "查无此人" << endl;
				else
					array[i].Display();
				break;
			case 3:OutPutStu(array); break;
			case 4:if (InsertStu(array))
				cout << "成功插入一条记录！" << endl;
				   else
				cout << "插入失败！" << endl;
				break;
			case 5:cout << "Input the name deleted:" << endl;
				cin >> na;
				if (DeleteStu(array, na))
					cout << "成功删除一条记录！" << endl;
				else cout << "删除失败" << endl;
				break;
			default:break;
			}
		}
	} while (choice);
	getchar();
	return 0;
}
////////////////////////////
void menu()
{
	cout << ******************1.录入信息****************** << endl;
	cout << ******************2.查询信息****************** << endl;
	cout << ******************3.浏览信息****************** << endl;
	cout << ******************4.插入信息****************** << endl;
	cout << ******************5.删除信息****************** << endl;
	cout << ******************6.退	 出****************** << endl;
}
void OutPutStu(const Student *array)
{
	cout << "学生总人数" << Student::GetCount() << endl;
	for (int i = 0; i < N; i++)
		if (array[i].GetAge())
			array[i].Display();
}
//////////////////////////////
void SearchStu(const Student*array, char*na)
{
	int i, j = N;
	for(i=0l;i<N;i++)
		if (strcmp(array[i].Getname(), na) == 0)
		{
			j = 1;
			break;
		}
	return j;
}
//////////////////////////////
void InPutStu(Student*array)
{
	char ch;
	int i = 0;
	do
	{
		if (Student::GetCount() == N)
			cout << "人数已满，无法录入" << endl;
		if (!array[i].GetAge())
			array[i++].Input();
		cout << "继续输入吗？(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
////////////////////////////
bool InsertStu(Student*array)
{
	if (Student::GetCount() == N)
	{
		cout << "人数已满，无法插入记录" << endl;
		return false;
	}
	for (int i = 0; array[i].GetAge(); i++);
		arrray[i].Insert();
		return true;
}

bool DeleteStu(Student*array, char*na)
{
	if (Student::GetCount() == 0)
	{
		cout << "没有记录，无法删除!" << endl;
		return false;
	}
	int i=SearchStu(array,na)
		if (i = N)
		{
			cout << "查无此人，无法删除" << endl;
			return false;
		}
	array[i].Delete();
	return true;
}