#include<iostream>
#include"date4.h"
int main()
{
	Date array[3] = { Date(2011,5,1),Date(2011,10,1) };
	for (int i=0;i<3;i++)//数组里没有被定义的用默认参数值的函数填充了
	{
		array[i].Display();
	}
	getchar();
	return 0;


}