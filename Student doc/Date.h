/*
 * Date.h
 *
 *  Created on: Sep 11, 2019
 *      Author: tyler
 */

#ifndef DATE_H_
#define DATE_H_
#include <iostream>

using namespace std;
class date
{


int month;
int day;
int year;

//cosntructors
public:
date();
date(int,int,int);
//setters
void SetDay(int);
void SetMonth(int);
void SetYear(int);

//getters
int GetDay();
int GetMonth();
int GetYear();
};



#endif /* DATE_H_ */
