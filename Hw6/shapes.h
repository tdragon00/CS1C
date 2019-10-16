/*
 * shape.h
 *
 *  Created on: Oct 14, 2019
 *      Author: Slickback
 */

#ifndef SHAPES_H_
#define SHAPES_H_

class shape
{


public:
virtual double calcArea()=0;
virtual double calcPerimeter()=0;


shape();

 //virtual ~shape();
 virtual ~shape(){};





};

class triangle :public shape
{

	double A;
	double B;
	double C;

public:
	 triangle();
	 ~triangle();

	virtual double calcArea();
	virtual double calcPerimeter();

	void setA(double);
	void setB(double);
	void setC(double);
	double getA();
	double getB();
	double getC();


};

class square :public shape
{
	double A;
	double B;


public:

	void setA(double);
	void setB(double);
	double getA();
	double getB();



};


#endif /* SHAPES_H_ */
