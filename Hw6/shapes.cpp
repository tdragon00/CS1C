#include "shapes.h"
#include <iostream>
#include <cmath>

shape::shape(){};

 double triangle::calcArea()
{
	double s= (calcPerimeter()/2);

double area= sqrt(s*(s-A)*(s-B)*(s-B));
	return area;
}
 double  triangle::calcPerimeter()
{


	 return (A+B+C);
}



triangle::triangle()
{
A=0;
B=0;
C=0;
}
