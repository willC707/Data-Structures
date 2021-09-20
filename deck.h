#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>

class deck
{
    public:
        deck();
        void makeDeck();
        virtual ~deck();
        int getDeckSize();

    private:
        int deckSize;
        int maxSize = 52;
        int type;

        class card * newpntr;
       
        std::vector< class card * > gameDeck();
};

#endif