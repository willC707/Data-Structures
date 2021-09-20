#ifndef CARD_H
#define CARD_H

#include "deck.h"

class card
{
    protected:
        

    public:
        card(int val, int type, int num);
        int getVal();
        int getType();
        card(const card &c);
        card(card && obj);
        virtual ~card();
        bool validCard();


    

    private:
        card() = delete;
        int m_value;
        int m_suit;
        int m_cardNum;

    friend class deck;

};

#endif