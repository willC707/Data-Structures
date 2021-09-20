#include <string>
#include <vector>
#include "card.h"

class deck : public card
{
    public:
        deck();
        void makeCard(int val);
        int getDeckSize();
        void validateDeck();
        std::string tostring();

    private:
    int deckSize;
    int cardsInDeck;
    std::vector< card > deckCards;



};