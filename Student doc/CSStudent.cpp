/*
 * CSStudent.cpp
 *
 *  Created on: Sep 11, 2019
 *      Author: tyler
 */

#include<iostream>
#include<iomanip>
#include "date.h"
#include "student.h"
#include "CS1Cstudent.h"
using namespace std;
CSStudent::CSStudent()
{
	python_knowledge =0;
	Score=0;
	Graduation=date();


};
CSStudent::CSStudent(bool x, int y,date z)
{
	python_knowledge=x;
	Score=y;
	Graduation=z;
};
//setters
void CSStudent::Setknowledge(bool x)
{
python_knowledge=0;
};
void CSStudent::Setscore(int x )
{
Score=x;
};
void CSStudent::setgdate(date x )
{
	Graduation=x;
};

//getters
date CSStudent::getdate()
{
return Graduation;
};
bool CSStudent::getknowledge()
{
return python_knowledge;
}
int CSStudent::getscore()
{
return Score;
}
//print
void CSStudent::print()
{
	{	cout<<left<<endl;
		cout<<left<<" FIRST NAME: "<<setw(8)<<GetFirst_Name();
		cout<<left<<" LAST NAME: "<<setw(8)<<GetLast_Name();
		cout<<left<<" ID: "<<setw(8)<<GetID();
		cout<<left<<" Phone Number "<<setw(12)<<GetPhone_Number();
		cout<<left<<" Age: "<<setw(3)<<GetAge();
		cout<<left<<" Gender: "<<setw(2)<<GetGender();
		cout<<left<<" Class Stadning: "<<setw(10)<<GetClass_Standing();
		cout<<left<<" GPA: "<<setw(5)<<setprecision(3)<<GetGPA()<<endl;
}

