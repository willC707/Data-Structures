#include "deck.h"
//#include "card.h"

deck::deck() :deckSize(0)
{
}

void deck::makeDeck()
{
    int cardval =1;
    while(deck::deckSize < maxSize)
    {
        if(cardval > 13){cardval = 1;}
        if(deckSize < 13){type = 1;}
        else if(deckSize < 26){type = 2;}
        else if(deckSize < 39){type = 3;}
        else{type = 4;}

        newpntr = new card(cardval,type,deckSize);
        gameDeck().push_back(newpntr);

        ++deckSize;
    }
}

int deck::getDeckSize()
{
    return deckSize;
}

deck::~deck()
{
    for(int i = gameDeck().size(); i >= 0 ; i--)
    {
        newpntr = gameDeck().at(i);
        gameDeck().pop_back();
        delete newpntr;
        newpntr = nullptr;

    }
}