  /*
 * dev.h
 *
 *  Created on: Sep 25, 2019
 *      Author: tyler
 */
#include "student.h"
#include <string.h>
#ifndef DEV_H_
#define DEV_H_

class dev :public student
{


	char *address;
	char *city;
	char *state;



	public:
	//constructors   
	dev();
	dev(char*,char*,char*);
	dev(char*,char*,char*,std::string,std::string,std::string, std::string, int,char,std::string,float );

	//copy contructor


	dev(const dev&);
	//setters;
	void setaddress(char*);
	void setcity(char* );
	void setstate(char*);
	//getters;
	char* getaddress()const;
	char* getcity()const ;
	char* getstate()const ;
	void print();

	//deep copy operator
	void operator=(const dev &d)
	{strcpy(address,d.address);
	strcpy(city,d.address);
	strcpy(state,d.address);
	student::Age=d.Age;
	student::Class_Standing=d.Class_Standing;
	student::First_Name=d.First_Name;
	student::GPA=d.GPA;
	student::Gender=d.Gender;
	student::ID=d.ID;
	student::Last_Name=d.Last_Name;
	student::Phone_Number=d.Last_Name;

	}


};



#endif /* DEV_H_ */
