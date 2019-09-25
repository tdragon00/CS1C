/*
 * CS1Cstudent.h
 *
 *  Created on: Sep 11, 2019
 *      Author: tyler
 */

#ifndef CSSTUDENT_H_
#define CSSTUDENT_H_
#include <iostream>
#include "student.h"
#include "Date.h"

class CSStudent :public student
{
//couldnt get a bool to work
string python_knowledge;
int Score;
public:
date Graduation;

//constructors
CSStudent();
CSStudent(string, int,date);
//setters
void Setknowledge(string);
void Setscore(int);
void setgdate(date);

//getters
date getdate();
string getknowledge();
int getscore();
//print
void print();

	};


#endif /* CS1CSTUDENT_H_ */
