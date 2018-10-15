#include <iostream>

using namespace std;

int x = 5, y = 10;
int &r = x;                                     	//����һ������r��Ϊ����x�ı���

void print()                                    	//����һ��ר����������ĺ��� 
{
	cout << "x=" << x << " y=" << y << " r=" << r << endl;  	//���x��y��r��ֵ
	cout << "Address of x " << &x << endl;        	          //�������x���ڴ��ַ
	cout << "Address of y " << &y << endl;          	      //�������y���ڴ��ַ
	cout << "Address of r " << &r << endl;       		      //�������r���ڴ��ַ
}

int main()
{
	print();                                   	//��1�ε����������

	r = y;                                     	//�൱��x=y����y��ֵ����x
											//������r�ı�Ϊ����y�ı���
	y = 100;                                  	//��y���¸�ֵ����Ӱ������r��ֵ
	print();                                  	//�ٴε����������
	x = 200;                                     //��x���¸�ֵ, r��֮�ı�,����Ӱ�����y��ֵ
	print();                                  	//�ٴε����������
	getchar();
	return 0;
}