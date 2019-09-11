/*
 * student.cpp
 *
 *  Created on: Sep 4, 2019
 *      Author: tyler
 */


#include"student.h"
#include<string>
#include<iostream>
#include<iomanip>

using namespace std;
	//constructors
 student::student()
{
	First_Name="NOT SET";
	 Last_Name="NOT SET";
	 ID="NOT SET";
	 Phone_Number="NOT SET";
	 Age= 0000;
	 Gender= 'O';
	 Class_Standing="NOT SET";
	 GPA= 00000;

}

 student::student(string w,string x,string y ,string z ,int t,char p,string u,float i)
{

	First_Name=w;
	 Last_Name=x;
	 ID=y;
	 Phone_Number=z;
	 Age= t;
	 Gender= p;
	 Class_Standing= u;
	 GPA= i;
}




//setters

	void student:: SetFirst_Name(string x)
	{
		First_Name=x;

	}
	void student::SetLast_Name(string x)
	{
	 Last_Name=x;
	}
	void student::setID(string x)
	{
		ID=x;
	}
	void student::SetPhone_Number(string x)
	{
		Phone_Number=x;
	}
	void student::SetAge(int x)
	{
		Age=x;
	}
	void student::SetGender(char x)
	{
		Gender=x;
	}
	void student::SetClass_Standing(string x)
	{
		Class_Standing=x;
	}
	void student::SetGPA(float x)
	{
		GPA=x;
	}
	//getters
	string student:: GetFirst_Name()
	{
		return First_Name;
	}
	string student::GetLast_Name()
	{
		return Last_Name;
	}
	string student::GetID()
	{
		return ID;
	}
	string student::GetPhone_Number()
	{
		return Phone_Number;
	}

	int student::GetAge()
	{
		return Age;
	}
	char student::GetGender()
	{
		return Gender;
	}
	string student::GetClass_Standing()
	{
		return Class_Standing;
	}
	float student::GetGPA()
	{
		return GPA;
	}

	//print function
	void student::print()
	{	cout<<left<<endl;
		cout<<left<<" FIRST NAME: "<<setw(8)<<GetFirst_Name();
		cout<<left<<" LAST NAME: "<<setw(8)<<GetLast_Name();
		cout<<left<<" ID: "<<setw(8)<<GetID();
		cout<<left<<" Phone Number "<<setw(12)<<GetPhone_Number();
		cout<<left<<" Age: "<<setw(3)<<GetAge();
		cout<<left<<" Gender: "<<setw(2)<<GetGender();
		cout<<left<<" Class Stadning: "<<setw(10)<<GetClass_Standing();
		cout<<left<<" GPA: "<<setw(5)<<setprecision(3)<<GetGPA();
	}
