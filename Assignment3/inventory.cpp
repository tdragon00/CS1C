/*
 * inventory.cpp
 *
 *  Created on: Sep 16, 2019
 *      Author: tyler
 */
#include "inventory.h"
#include <iostream>
#include <string>




int inventory::namecheck(std::string x)
{

 for(int i=0; i < inventory::NUM_OF_PRODUCTS; i++)
 {

	if(x==Products[i])
	{
		//returns index of a correct and valid name of a product
		return i;
	}

 }

 //returning number outside of the array this represents a bad name
 return (inventory::NUM_OF_PRODUCTS);

}







int inventory::productprompt()
{
	bool done = false;

	std::string choice;
	int pnumber;
  std::cout<<"Please type in the name of what you would like to add to the cart"<<std::endl;
	while(!done)
  {


	std::cin>>choice;
	pnumber=inventory::namecheck(choice);
	if(pnumber== inventory::NUM_OF_PRODUCTS)
	{
		std::cout<<"The name you entered was not found, Please try again"<<std::endl;
	}
	else
	{
		std::cout<<"You have selected"<<inventory::Products[pnumber]<<std::endl;
		bool done= true;



	}

//return the number of the product
	}
	return pnumber;

}

int inventory::amountprompt(int p)
{
	bool done = false;
  int amount;

	std::cout<<"Please state how many "<<inventory::Products[p]<<" You would like to buy. The price per item is "<<inventory::Prices[p]<<std::endl;
	while(!done)
	{
    std::cin>>amount;
    done = inventory::amountcheck(p,amount);

	}

}

bool inventory::amountcheck(int p, int a )
{

	if(a>Quantity[p])
	{

		std::cout<<"The amount you have entered is too much"<<std::endl;
		return false;
	}
	else
	{
		return true;
	}





}
