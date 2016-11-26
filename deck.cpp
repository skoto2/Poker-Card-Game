#include "deck.h"
#include <ctime>
#include <cstdlib>

using namespace std;

deck::deck()
{
    srand(time(NULL));
    current =0;
    int i, j;

    for(i=0;i<13;i++)
    {
        for(j=0;j<4;j++)
        {

            card card(i,j);
            dof.push_back(card);
        }
    }
}

void deck::shufflecards()
{
    int first;
    int second;

    for(first=current;first<52;first++)
    {

        second = rand()%52;
        card x= dof[first];
        dof[first] = dof[second];
        dof[second]= x;
    }
}

card deck::deal()
{
    card x = dof[current];
    current++;
    return x;
}

bool deck::newcards()
{
    return(current!=52);
}
