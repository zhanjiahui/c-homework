#include"P109.h"
double Circle::Area()
{
	double a = GetRadius();
	//Radius *= 2;
	return PI * Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}
double Circle::GetRadius()const
{
	//double a = Area();
	//Radius *= 2;
	return Radius;
}