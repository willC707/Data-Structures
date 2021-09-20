#include "card.h"
#include <iostream>
#include "deck.h"

card::card(int val, int type , int num)
{
    m_value = val;
    m_suit = type;
    m_cardNum = num;
}

card::card(const card &c)
{
    std::cout << "[BAD]     Copy Constructor called" << std::endl;
    m_suit = c.m_suit;
    m_value = c.m_value;
}

card::card(card && obj)
{
    this->m_value = obj.m_value;
    this->m_suit = obj.m_suit;
    this->m_cardNum = obj.m_cardNum;
}

int card::getType()
{
    return m_suit;
}

int card::getVal()
{
    return m_value;
}

//not done, returns true
bool card::validCard()
{
    return true;
}

card::~card()
{
    std::cout<< "Deleting card"<< std::endl;
}
