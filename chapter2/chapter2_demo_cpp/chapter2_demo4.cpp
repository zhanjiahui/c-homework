#include<stdio.h>
#include<Windows.h>
int n = 10;

void func1()
{
	int n = 20;
	printf("func1 n:%d\n", n);	//20
}

void func2(int n)
{
	printf("func2 n:%d\n", n);
}

void func3()
{
	printf("func3 n: %d\n", n);
}

int main()
{
	int n = 30;
	func1();//20
	func2(n);//30
	func3();//30 ���ԣ�Ӧ����10.��Ϊû�в������ֲ�����û�д�����

	{
		int n = 40;
		printf("block  n:%d\n", n);//40
	}
	printf("main n:%d\n", n);//30
	system("pause");
	return 0;
}
