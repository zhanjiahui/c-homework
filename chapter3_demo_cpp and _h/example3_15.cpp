#include"Date4.h"
int main()
{
	Date array[3] = { Date(2011,5,1),Date(2011,10,1) };
	Date *p = array;
	for(;p<array+3;p++)//间接使用对象数组
	{
		p->Display();
	}
	getchar();
	return 0;
}