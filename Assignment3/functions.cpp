/*
 * functions.cpp
 *
 *  Created on: Sep 16, 2019
 *      Author: tyler
 */
#include<iostream>
#include"functions.h"
#include <string>
#include "inventory.h"

int Find_Product(std::string x, )
{
	int ID=0;
	bool found =false;


	for(int i= 0; i<5; i++)
{
 if(x== inventory::Products[i])
 {
ID= i;
found= true;
 }


}






if(found==true)
{
	return ID;
}
else
	return 5;
}

void Add_Product()
{

}


