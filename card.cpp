#include "Card.h"

string card::facesofcards[]={"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
string card::suitsofcards[]={"Club","Diamond","Heart", "Spades"};

card::card(int cardface,int cardsuit)
{
    face = cardface;
    suit = cardsuit;
}

string card::ts() const
{
    return facesofcards[face]+" of "+suitsofcards[suit];
}
