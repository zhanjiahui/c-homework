
#include <iostream>
using namespace std;

int& Fun(const int &x, int &y, int z)   //�������õĺ���
{
	z++;                       //��ֵ��ʽ�������޸Ĳ���Ӱ���Ӧʵ�ʲ�������
	y = x + y + z;                   //ͨ���޸�y�ı��2��ʵ�ʲ���������ֵ
	return y;                    //���ص������ò�����ʵ�����Ƕ�Ӧʵ�α���
}

int main()
{
	int a = 1, b = 2, c = 3, d = 0;
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;

	Fun(a, b, c);               //��Ϊ�����ĺ����������ʹ�ã�����ֵ������
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;

	d = Fun(a, b, c);             //��Ϊ���ʽ�е�һ���������ʹ�ã�����ֵ��������
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;

	Fun(a, b, c) = 20;            //��ֵ���ã����÷��صĺ������з�ʽ���൱��b=20��
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	getchar();
	return 0;
}

