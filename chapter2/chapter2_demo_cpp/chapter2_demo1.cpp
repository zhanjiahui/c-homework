#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{
	char c;                           //�������c��a��f��ֵ
	int a;
	float f;

	cin >> c >> a >> f;                //�������c��a��f��ֵ

	a = a + c;
	f = f + 2 * a;

	cout << "c=" << c << "  a=" << a << "  f=" << f << endl;  	//�������c��a��f��ֵ
	system("pause");
	return 0;

}