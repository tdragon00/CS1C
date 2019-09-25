



#include <iostream>
#include <string>
#include "inventory.h"
#include "Item.h"









int main()
{
	bool done=false;
	char input;

	int current_number; //product number
	int current_amount; //product amount
Item cart[5];
Item *p;
while (!done)
 {


current_number =inventory::productprompt();
current_amount =inventory::amountprompt(current_number);
p= new Item(current_number,current_amount);
cart[p->product_number]=*p;

std::cout<<"Press Y to add another item to the cart, type anything else to purchase another item"<<std::endl;
std::cin>>input;
if(input=='Y')
{
	done=true;
}

}

double subtotal=0;
double total=0;
for(int i=0;i<inventory::NUM_OF_PRODUCTS;i++)
{
	total=total+ (cart[i].amount * inventory::Prices[cart[i].product_number]);


}

total = total*(1+inventory::taxrate);




}
