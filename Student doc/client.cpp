/*
 * client.cpp
 *
 *  Created on: Sep 4, 2019
 *      Author: tyler
 */

#include "student.h"
#include"date.h"
#include <string>
#include"CSStudent.h"
#include"dev.h"


int main()
{
	/*
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

cout<<"Testing defualt constructor \n";
students[0].print();
cout<<"\n Mutating data, and printing off students with the newly changed data \n";
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
date grad(5,11,2020);
CSStudent CS[3]={CSStudent(),CSStudent(),CSStudent("yes",800,grad)};
//printing to see if default and non default constructor works
cout<<"\n \nPrinting a default CS student, and a non default constructed student"<<endl;
CS[0].print();
CS[2].print();
//mutating the data
CS[0].SetAge(31);
CS[0].SetClass_Standing("Freshman");
CS[0].SetFirst_Name("Adele");
CS[0].SetGPA(3.3);
CS[0].SetGender('F');
CS[0].SetLast_Name("");
CS[0].SetPhone_Number("949-665-1234");
CS[0].setID("667788");
CS[0].Setknowledge("no");
CS[0].Setscore(500);
CS[0].Graduation.SetDay(12);
CS[0].Graduation.SetMonth(5);
CS[0].Graduation.SetYear(2020);

CS[1].SetAge(29);
CS[1].SetClass_Standing("Sophomore");
CS[1].SetFirst_Name("Taylor");
CS[1].SetGPA(3.9);
CS[1].SetGender('F');
CS[1].SetLast_Name("Swift");
CS[1].SetPhone_Number("248-555-6543");
CS[1].setID("156789");
CS[1].Setknowledge("no");
CS[1].Setscore(700);
CS[1].Graduation.SetDay(11);
CS[1].Graduation.SetMonth(5);
CS[1].Graduation.SetYear(2020);

CS[2].SetAge(33);
CS[2].SetClass_Standing("Sophomore");
CS[2].SetFirst_Name("Bruno");
CS[2].SetGPA(3.2);
CS[2].SetGender('M');
CS[2].SetLast_Name("Mars");
CS[2].SetPhone_Number("703-703-7654");
CS[2].setID("876543");
CS[2].Setknowledge("yes");
CS[2].Setscore(800);







//printing the newly mutated data
cout<<"\n \n Printing out the CS students with new changed data"<<endl;
CS[0].print();
CS[1].print();
CS[2].print();
*/
	dev devchan;
	dev testchan;

	char test[]="hole";
	devchan.setaddress(test);
	std::cout<<devchan.getaddress();









}
