/*
 * CS1Cstudent.h
 *
 *  Created on: Sep 11, 2019
 *      Author: tyler
 */

#ifndef CS1CSTUDENT_H_
#define CS1CSTUDENT_H_
#include <iostream>
#include "student.h"
#include "Date.h"

class CSStudent :public student
{
bool python_knowledge;
int Score;
date Graduation;
public:
//constructors
CSStudent();
CSStudent(bool, int,date);
//setters
void Setknowledge(bool);
void Setscore(int);
void setgdate(date);

//getters
date getdate();
bool getknowledge();
int getscore();
//print
void print();

	};


#endif /* CS1CSTUDENT_H_ */
