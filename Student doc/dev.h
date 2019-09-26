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
	dev(char,char,char);
	dev(char,char,char,std::string,std::string,std::string, std::string, int,char,std::string,float );
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


};



#endif /* DEV_H_ */
