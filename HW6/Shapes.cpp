#include "Shapes.h"
#include <cmath>


double triangle::calcPerimeter()
{

	return (side_a + side_b +side_c);
}

double triangle::calcArea()
{
	double semi = calcPerimeter()/2;
	double multi= ((semi-side_a)+(semi-side_b)+(semi-side_c));
	double total= semi*multi;
	return sqrt(total);
}

void triangle::setside_a(double x)
{
	side_a=x;
}
void triangle::setside_b(double x)
{
	side_b=x;
}
void triangle::setside_c(double x)
{
	side_c=x;
}
triangle::triangle()
{

side_a=0;
side_b=0;
side_c=0;

}
