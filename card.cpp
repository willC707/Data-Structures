#include "card.h"

card::card(int val)
{
    cardVal = val;
}

card::card(card && obj)
{
    this->cardVal = obj.cardVal;
}

int card::getCard()
{
    return cardVal;
}

card::~card(){}