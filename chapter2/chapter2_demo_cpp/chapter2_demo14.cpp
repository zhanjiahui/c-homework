
#include <iostream>

using namespace std;

int main()
{
	void *vp;
	char c = 'A';
	short int x = 97;
	vp = &c;             		//char���͵�ָ�����ֱ�Ӹ�ֵ��void���͵�ָ�����
	cout << *(char *)vp << "  " << *(short int*)vp << endl;

	vp = &x;             		//short int���͵�ָ�����ֱ�Ӹ�ֵ��void���͵�ָ�����
								//��Ҫ��ʽ����ת�����void����ָ����ָ�������
	cout << *(short int *)vp << "  " << *(char*)vp << endl;
	getchar();
	return  0;
}
