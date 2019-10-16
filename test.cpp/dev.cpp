/*
 * dev.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: tyler
 */

#include "dev.h"
#include "student.h"
#include <string.h>
#include <iomanip>




	dev::dev():student()
	{
		address= new char;
		city= new char;
		state= new char;


		strcpy(address,"NOT SET");
		strcpy(city,"NOT SET");
		strcpy(state,"NOT SET");


	}
	dev::dev(char* ad,char* ci ,char* st):student()
	{


		address= new char;
		city= new char;
		state= new char;
		strcpy(address,ad);
		strcpy(city,ci);
		strcpy(state,st);
	}



	dev::dev(char* ad,char* ci ,char* st ,std::string z,std::string x, std::string c, std::string v, int b, char n,std::string m ,float l ):student(z,x,c,v,b,n,m,l)

	{
		address= new char;
		city= new char;
		state= new char;
		strcpy(address,ad);
		strcpy(city,ci);
		strcpy(state,st);

	}

	//copy contrucntor

	dev::dev(const dev & olddev)
	{
		address = new char;

		city = new char;

		state = new char;
		strcpy(address,olddev.address);
		strcpy(city,olddev.city);
		strcpy(state,olddev.state);
	   std::cout<<"Copy Constructor Called";



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
	 strcpy(state, x);
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

	// print function
	void dev::print()
	{student::print();
		std::cout<<" Address: "<<getaddress();
		std::cout<<" City : "<<getcity();
		std::cout<<" state: "<<getstate();
		std::cout<<endl;



	}
