/*
 * student.h
 *
 *  Created on: Sep 4, 2019
 *      Author: tyler
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
using namespace std;

class student
{
	//variables
	string First_Name;
	string Last_Name;
	string ID;
	string Phone_Number;
	int Age;
	char Gender;
	string Class_Standing;
	float GPA;

public:
	//constructors
	student();
	student(char*,char*,char*);
	student(string,string,string,string,int,char,string,float);

	//setters
	void SetFirst_Name(string);
	void SetLast_Name(string);
	void setID(string);
	void SetPhone_Number(string);
	void SetAge(int);
	void SetGender(char);
	void SetClass_Standing(string);
	void SetGPA(float);
	//getters
	string GetFirst_Name();
	string GetLast_Name();
	string GetID();
	string GetPhone_Number();
	int GetAge();
	char GetGender();
	string GetClass_Standing();
	float GetGPA();

	//print function
	void print();



};



#endif /* STUDENT_H_ */
