//example3_11
#include"date3.h"

Date f(Date Q) //普通函数，以类对象作为值形式参数
{
	Date R(Q);//第1种调用拷贝构造函数情况
	return Q; //第3种调用拷贝构造函数情况
}
int main()
{
	Date day1(2011, 5, 26);
	Date day3;

	Date day2(day1);//第1种调用拷贝构造函数情况
	Date day4 = day2;//此语句等效于Date day4(day2);

	day3 = day2;//此语句为赋值语句，不调用任何构造函数
	day3 = f(day2); //第2种调用拷贝构造函数情况
	day3.Display();
	getchar();
	return 0;
}