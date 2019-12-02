
#include <iostream>
#include <string>
//! This function reverses elements in a char array using two ints and a char array.
/*!
* It reverses all elements in the array between the element array[first int] and element[secondint]  (inclusive)
* The function is recursive and it will only reverse letters if the first int is not the second int and the second int is not bigger than the first int.
*
*
*
*/
void reverse(char letters[],  int first , int second);



void reverse(char letters[],  int first , int second)
{

if (first != second && !(second < first) )
{
	char holder='a';
	holder= letters[first];
	letters[first]=letters[second];
	letters[second]=holder;




	reverse(letters,  first+1, second-1);
}


return;
}

//! this execution demonstrates the reverse function three times
/*!
 * 1 the program prints out the alphabet sorted
 * 2 the program calls the reverse function and reverses the elements 12-19
 * 3 the program prints out the reversed array
 * 4 steps 2&3 are repeated with inputs [5,23], and  [0,25]
 */
int main()
{
//creating the base array
char letters[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','x','z','\0'};
//printing the base array
std::cout<<letters<<std::endl;
//reversing spots 12-19
reverse(letters,12,19);

std::cout<<letters<<std::endl;

//creating the second array
char letters2[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','x','z','\0'};
// reverseing spots 5-23
reverse(letters2,5,23);

std::cout<<letters2<<std::endl;

//creating the third array
char letters3[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','x','z','\0'};
//reversing the entire alphabet
reverse(letters3,0,25);

std::cout<<letters3;

return 0;
}


