#include "cardDeckClass.h"
#include <iostream>




//operator function
	bool carddeck:: operator == (const carddeck &otherdeck) const
	{
		bool done = false;
		//bool equals;
		int i =0;
		while( i<DECK_SIZE)
		{ if
			(carddeck::deck[i].cardrank == otherdeck.deck[i].cardrank &&
			 carddeck::deck[i].cardsuit == otherdeck.deck[i].cardsuit)
		{
			i++;
		}
		else
		{
			return false;
		}




		};
		return true;

	};

//constructor;
 carddeck::carddeck()

{
	 int cardsuit = 0;
	 	int cardrank = 0;
	 	shuffle_counter=0;
	 	for(int i =0; i<52; i++)
	 	{
	 		deck[i].cardrank =(rank) cardrank;
	 		deck[i].cardsuit = (suit) cardsuit    ;
	 		cardrank++;
	 		if(cardrank==13)
	 		{
	 		cardsuit++;
	 		cardrank =0;
	 		}
	 	};
};



//setters


//getter

void carddeck:: Printdeck()
	{
		for(int i =0; i<52; i++)
			{
			std::cout<< coutranks[deck[i].cardrank]<<" of "<<coutsuits[deck[i].cardsuit]<<std::endl;

			}
	};




void carddeck:: perfectshuffle()
{
card deck2[DECK_SIZE];


 	for(int i =0; i<52; i++)

 	{
 		deck2[i].cardrank = deck[i].cardrank;
 		deck2[i].cardsuit = deck[i].cardsuit;
 	}


 	int place = 0;
 	for(int i= 0; i<26;i++)

 		{

 		deck[place].cardrank=deck2[i].cardrank;
 		deck[place].cardsuit=deck2[i].cardsuit;
 		place++;
 		place++;

 		}

 place = 1;

 	for(int i= 26; i<52;i++)

 		{

 		deck[place].cardrank=deck2[i].cardrank;
 		deck[place].cardsuit=deck2[i].cardsuit;
 		place++;
 		place++;

 		}

shuffle_counter++;

if(shuffle_counter >8){
	shuffle_counter = shuffle_counter -8;
};

};

int carddeck::perfectioncounter(){
std::cout<<" You need "<<8- shuffle_counter <<" Shuffles to get back to the original deck"<<std::endl;
return 8-shuffle_counter;
};



