#ifndef deck_h
#define deck_h
#include<vector>
#include "card.h"

using namespace std;


class deck
{
public:
    deck();
    void shufflecards();
    card deal();
    bool newcards();
private:
    std::vector<card> dof;
    int current;

};
#endif // deck_h
