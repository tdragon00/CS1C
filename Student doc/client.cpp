/*
 * client.cpp
 *
 *  Created on: Sep 4, 2019
 *      Author: tyler
 */

#include "student.h"
#include"date.h"
#include <string>


int main()
{
	//variables used in constructor test otherwise program takes the "string inputs" and
	//interprets them as char arrays, and is not recognized in the constructor
	string firstholder="Madona";
	string lastholder="";
	string idholder="123456";
	string phoneholder="714555555";
	int ageholder=61;
	char genderholder='F';
	string standingholder= "Sophomore";
	float gpaholder= 3.23;

//Testing constructors for students
student students[]=
{student(),student(firstholder,lastholder,idholder,phoneholder,ageholder,genderholder,standingholder,gpaholder), student(), student() };

//testing to see if defcault constructor works
students[0].print();



students[0].SetAge(51);
students[0].SetClass_Standing("Freshman");
students[0].SetFirst_Name("Celine");
students[0].SetGPA(4.0);
students[0].SetGender('F');
students[0].SetLast_Name("Dion");
students[0].SetPhone_Number("949-555-1234");
students[0].setID("444444");




students[2].SetAge(50);
students[2].SetClass_Standing("Sohpomore");
students[2].SetFirst_Name("Jennifer");
students[2].SetGPA(3.79);
students[2].SetGender('F');
students[2].SetLast_Name("Lopez");
students[2].SetPhone_Number("760-703-1234");
students[2].setID("876542");



students[3].SetAge(33);
students[3].SetClass_Standing("Freshman");
students[3].SetFirst_Name("Lady");
students[3].SetGPA(2.10);
students[3].SetGender('F');
students[3].SetLast_Name("Gaga");
students[3].SetPhone_Number("213-555-6789");
students[3].setID("777744");


//printing all the students
cout<<"/n Here we are printing out all the students:"<<endl;

students[0].print();
students[1].print();
students[2].print();
students[3].print();








}
