#include <iostream>
using namespace std;

int main()
{
	int x = 5;

#define  T1  x+x    	//�ú궨�嶨����ų���T1

#define  T2  T1-T1  	//�ú궨�嶨����ų���T2

	cout << "T1=" << T1 << "  T2=" << T2 << endl;
	getchar();
	return 0;
}