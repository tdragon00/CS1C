

#ifndef _INVENTORY_H
#define _INVENTORY_H
#include <string>

namespace inventory{

double taxrate = .0775;

static std::string Products[5]{"Nike basketball shoes","Under Armor T-shirt","Brooks running shoes",
		"Asics running shoes","Under armour shorts" };


static const int NUM_OF_PRODUCTS=5;

static const double Prices[5]={179.99,29.99,121.44,165.88,45.77};

int Quantity[5]={42,44,13,12,35};

int productprompt();

int namecheck(std::string);

bool amountcheck(int product_number, int amount);

int amountprompt(int product_number);







}
#endif
