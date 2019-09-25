
#include <iostream>
#include <string>
#include "inventory.h"
#include "Item.h"












Item::Item()
{
product_number=0;
amount=0;
}


Item::Item(int p,int a)
{
product_number=p;
amount=a;
}
