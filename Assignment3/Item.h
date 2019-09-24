/*
 * Item.h
 *
 *  Created on: Sep 18, 2019
 *      Author: tyler
 */

#ifndef ITEM_H_
#define ITEM_H_
struct Item
{
// product variables
	int product_number;
	int amount;


public:
//constructors
	 Item();
	 Item(int p,int a);


//setters
void setproductnumber();
void setamount();

//getters
int getnumber();
int getamount();

};




#endif /* ITEM_H_ */
