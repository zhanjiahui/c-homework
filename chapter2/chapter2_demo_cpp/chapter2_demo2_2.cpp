#include <iostream>

using namespace std;

int main()
{
	int x = 5;

	const int T1 = x + x;      	//��5����const������ų���T1

	const int T2 = T1 - T1;   	//��6����const������ų���T2

	cout << "T1=" << T1 << "  T2=" << T2 << endl;
	getchar();
	return 0;
}