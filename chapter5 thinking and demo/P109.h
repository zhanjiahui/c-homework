#pragma once
#ifndef _Circle
#define _Circle
class Circle
{
public:
	Circle(double r = 0) :PI(3.1415926)
	{
		double Area();
		double Circumference();
	}
	double Area();
	double Circumference();
	double GetRadius()const;
private:
	double Radius;
	const double PI;
};
#endif // !_Circle