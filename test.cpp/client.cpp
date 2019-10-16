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


void passbycopy(dev);
void passbyref(dev&);
dev returnbycopy(dev&);
dev& returnbyref(dev& );



int main()
{

	char address1[]="123 main \0";
	char city1[]="MV\0";
	char state1[]="CA\0";
	//dev devchan(address1, city1, state1);
	dev testchan;
	std::cout<<"Printing out a software developer without any data"<<endl;
	testchan.print();
	std::cout<<endl;
	std::cout<<"Changing the address, city, and state of a software developer class"<<endl;
	testchan.setaddress(address1);
	testchan.setcity(city1);
	testchan.setstate(state1);
	testchan.SetAge(42);
	//std::cout<<testchan.getaddress();
	std::cout<<"\n Printing out the newly changed Software dev \n";
	testchan.print();





 passbycopy(testchan);
 passbyref(testchan);
// returnbycopy(testchan);
 returnbyref(testchan);
 std::cout<<"\n testing the deep copy function\n";
 dev test3=testchan;
 test3.print();
 dev test2=testchan;
 test2.print();



}

void passbycopy(dev){
	std::cout<<"\n call by copy \n";
};
void passbyref(dev&){
	std::cout<<"\n call by reference \n";
};
dev returnbycopy(dev &x){

	std::cout<<"\n returning by copy \n";
	return x;
};
dev & returnbyref(dev & x){
	std::cout<<"\n returning by reference \n";
	return x;
};

