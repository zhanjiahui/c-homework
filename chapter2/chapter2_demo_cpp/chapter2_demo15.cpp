#include <iostream>
using namespace std;

int divide(int x, int y)
{
	if (y == 0) throw y;                 //�����ĸΪ�㣬�׳��쳣
	return x / y;
}


int main()
{
	int a = 10, b = 5, c = 0;

	try                                 //����Ƿ�����쳣
	{
		cout << "a/b=" << divide(a, b) << endl;
		cout << "b/a=" << divide(b, a) << endl;
		cout << "a/c=" << divide(a, c) << endl;
		cout << "c/b=" << divide(c, b) << endl;
	}
	catch (int)                        //�����쳣���������������һ����ʾ��Ϣ
	{
		cout << "except of divide zero" << endl;
	}

	cout << "calculate finished" << endl;  	//catch��ĺ������
	getchar();
	return 0;
}