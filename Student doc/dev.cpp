/*
 * dev.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: tyler
 */

#include "dev.h"
#include "student.h"
#include <string.h>




	dev::dev():student()
	{
		address= new char;
		city= new char;
		state= new char;

	}
	dev::dev(char ad,char ci ,char st):student()
	{
		address= new char;
		city= new char;
		state= new char;
		address=&ad;
		city=&ci;
		state=&st;

	}



	dev::dev(char ad,char ci ,char st ,std::string z,std::string x, std::string c, std::string v, int b, char n,std::string m ,float l ):student(z,x,c,v,b,n,m,l)

	{

		address=&ad;
		city=&ci;
		state=&st;

	}

	//copy contrucntor

	dev::dev(const dev & olddev)
	{
		address = new char;
	   address =olddev.address;
		city = new char;
	   city =olddev.city;
		state = new char;
	   state =olddev.state;
	   std::cout<<"CCC";



	}

	//setters;
	void dev::setaddress(char *x)
	{
		strcpy(address,x);
	};


	void dev::setcity(char *x)
	{
		strcpy(city, x);
	};
	void dev::setstate(char *x)
	{
	 strcpy(city, x);
	};
	//getters;
	char* dev::getaddress()const
	{
		return address;

	};
	char* dev::getcity()const
	{
		return city;
	};
	char* dev::getstate()const
	{
		return state;
	};
