/*
 * cardDeckClass.h
 *
 *  Created on: Jan 28, 2019
 *      Author: tyler
 */
#include <string>
#ifndef CARDDECKCLASS_H_
#define CARDDECKCLASS_H_

const int DECK_SIZE = 52;
class carddeck
	{


	int shuffle_counter =0;
	enum rank
		{

		Ace,
		King,
		Queen,
		Jack,
		Ten,
		Nine,
		Eight,
		Seven,
		Six,
		Five,
		Four,
		Three,
		Two,

		};

	enum suit
	{

		Spades,
		Hearts,
		Diamonds,
		Clubs,

	};

// output words
std::string coutranks[13]=
{
"Ace",
"King",
"Queen",
"Jack",
"Ten",
"Nine",
"Eight",
"Seven",
"Six",
"Five",
"Four",
"Three",
"Two"

};
std::string coutsuits[4]=
{
	"Spades",
	"Hearts",
	"Clubs",
	"Diamonds"
};

public:


bool operator == (const carddeck &otherdeck) const;
//comparison between two decks returns true if they are the same else false
//constructor
carddeck();
//contructs the deck in a standard configuration
//setters

 void setcardrank(int x);
 //sets the cards rank

 void setcardsuit(int x);
 //sets the card suit

//getters

int getrank();
//returns the cards rank
int getsuit();
//returns the cards suit


// functions

void	Printdeck();
//prints decks out into the colsole
void 	perfectshuffle();
//shufles the cards by splitting in half, 1st is followed by the 27th
int 	perfectioncounter();
// number of shuffles left until a perfect shuffle

//struct card member
	struct card
	{
	rank cardrank;
	suit cardsuit;
	};

card deck[52];

};




#endif /* CARDDECKCLASS_H_ */
