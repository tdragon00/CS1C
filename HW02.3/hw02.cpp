
#include "cardDeckClass.h"
#include <iostream>


	int main()
	{
 carddeck first;
 carddeck second;



 std::cout<<" CLASS:CS1C \n Professor Lebowits \n Student: Tyler Dewalt \n Output Description: Bellow will be A deck of cards printed out \n"
		 <<"Next will be a print of a shuffled deck, and a comparison between an unshuffled deck and a shuffled deck, \n"
				 <<"Then there will be a printout of many more shuffles are needed to return the deck back to the original configuration, \n"
						 "finally there will be a printout after the the shuffled deck has been shuffled back into its original form.\n\n";
 //first.Printdeck();
 second.Printdeck();
 std::cout<<"\n";



 second.perfectshuffle();
 second.Printdeck();

 if(first==second)
 {
	 std::cout<<"The decks are the same \n";
 }else
 {
	 std::cout<<"The decks are not the same \n";
 }




int counter=second.perfectioncounter();
std::cout<<"Shuffling "<<counter<<" more times until we get the original deck\n";
 for(int i =0; i<counter; i++)
 {
	 second.perfectshuffle();
 }

 second.Printdeck();







	return 0;
	}







