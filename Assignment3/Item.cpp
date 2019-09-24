
#include <iostream>
#include <string>
#include "inventory.h"
#include "Item.h"













inventory::Item()
{
product_number=0;
amount=0;
}
inventory::Item(int p,int a)
{
product_number=p;
amount=a;
}
