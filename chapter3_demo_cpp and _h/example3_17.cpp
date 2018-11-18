﻿#include"date4.h"//引用的使用示例
#include <iostream>
Date DateA(2011, 1, 1), DateB(2010, 5, 1);
//调用两次构造函数生成两个对象
Date &pDate = DateA;
//引用pDate初始化为对象DateA的别名，不调用构造函数
void f()
{//用于输出对象DateA、DateB和引用pDate的值
	DateA.Display();
	DateB.Display();
	pDate.Display();
}
int main()
{
	cout << "original DateA,DateB,pDate:" << endl;
	f();
	pDate = DateB;
	cout << "after pDate=DateB,  DateA,DateB,pDate:" << endl;
	f();                  //此处输出的DateA、DateB、pDate值一定相等
	pDate = Date(2010, 10, 1);   //对引用pDate的值进行修改，相当于 DateA = Date(100,200); 
	cout << "after pDate=Date(2010, 10, 1),  DateA,DateB,pDate:" << endl;
	f();                 	//此处输出的DateA和pDate值一定相等，而DateB保持原值
	
	getchar();
	return 0;
}