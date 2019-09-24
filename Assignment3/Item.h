/*
 * Item.h
 *
 *  Created on: Sep 18, 2019
 *      Author: tyler
 */

#ifndef ITEM_H_
#define ITEM_H_
class Item
{
// product variables
	int product_number;
	int amount;


public:
//constructor
	 Item();
	~Item();

//setters
void setproductnumber();
void setamount();

//getters
int getnumber();
int getamount();

};




#endif /* ITEM_H_ */
