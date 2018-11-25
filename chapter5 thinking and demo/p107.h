#pragma once
#ifndef _Circle
#define _Circle
class Circle
{
public:
	Circle(double r = 0) :PI(3.1415926)
	{
		Radius = r;
		double Area();
		double Circumference();
	}
	/*Circle(double r = 0)
	{
		PI = 3.1415926;
		Radius = r;
	}*/

	double Area();
	double Circumference();
private:
	double Radius;
	const double PI;
};
#endif // !_Circle