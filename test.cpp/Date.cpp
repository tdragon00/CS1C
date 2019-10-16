/*
 * Date.cpp
 *
 *  Created on: Sep 11, 2019
 *      Author: tyler
 */


#include "Date.h"
#include <iostream>
using namespace std;
//cosntructors
date::date()
{
	day=0;
	month=0;
	year=0;


}
date::date(int x,int y,int z)
{
	month=x;
	day=y;
	year=z;
};
//setters
void date::SetDay(int x){
	day=x;
};
void date:: SetMonth(int y){
	month=y;
}
void date::SetYear(int x){
	year = x;
};

//getters
int date::GetDay(){
	return day;
};
int date::GetMonth()
{
return month;
};
int date::GetYear(){
	return year;;
}
