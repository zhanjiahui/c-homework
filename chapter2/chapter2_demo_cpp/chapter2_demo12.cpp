
#include <iostream>
using namespace std;

int Fun(const int &x, int &y, int z)   		//�Ե�1��ʵ�ʲ�������������ֻ�ܷ��ʲ����޸�
{   //  x++ ;                  		//�˾�����Ϊ��������䣬�򱨴���const���ƺ�ֻ��
									//����x�������޸�x
	z++;                      		//��ֵ��ʽ�������޸Ĳ���Ӱ���Ӧ��ʵ�ʲ�������
	y = x + y + z;                  		//ͨ���޸�y�ı��2��ʵ�ʲ���������ֵ
	return y;
}

int main()
{
	int a = 1, b = 2, c = 3, d = 0;
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	d = Fun(a, b, c);               		//��1��ʵ�ʲ����͵�3��ʵ�ʲ����������ܱ��޸�
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	getchar();
	return 0;
}