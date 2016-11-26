#include <iostream>
#include "Hand.h"
using namespace std;

//give away five cards to player
hand::hand(deck &dof):number(card::cardface)
{
    unsigned j=0;
   for (j = 0; j < 5; j++)
      phand.push_back(dof.deal());

   for ( j = 0; j < 5; j++)
      ++number[phand[j].getface()];
}
//display cards in the players hands
void hand::printhand() const
{
    unsigned j;
   cout << "Cards in player1's hand is:\n";
   for ( j = 0; j< 5; j++)
      cout << phand[j].ts() << '\n';
   cout << endl;
}

//a two pair is two different numbers that have a pair
bool hand::twopair()
{

   int counter =0;
   unsigned j;

   for (j = 0; j < number.size(); j++)
   {
      if (number[j]== 2)
        counter++;
      if (counter ==2)
         return true;

   }


   return false;
}

//a pair is when there are two of the same number
bool hand::pair()
{
    unsigned j;
   for (j = 0; j < number.size(); j++)
      if (number[j] == 2)
         return true;

   return false;
}


//three of the same number in hand
bool hand::threepair()
{
    unsigned j;
   for (j = 0; j < number.size(); j++)
      if (number[j] == 3)
         return true;

   return false;
}
//four of the same number in players hand
bool hand::fourpair()
{
    unsigned j;
   for (j = 0; j< number.size(); j++)
   {
    if (number[j] == 4)
         return true;
   }


   return false;
}
//suits are all the same in the hand
bool hand::flush()
{
   unsigned j;
   int suit;
   suit = phand[0].getsuit();

   for (j = 1; j < 5; j++)
      if (phand[j].getsuit() != suit)
         return false;

   return true;
}
//cards are in numeral order in hand
bool hand::straight()
{
   vector<int> x = number;
   x.push_back(x[0]);

   if (x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 1)
      return true;
   unsigned j = 1;
   while (j < x.size() && x[j] == 0)
      ++j;
   unsigned start = j;
   while (j< x.size() && x[j] == 1)
      ++j;
   return j == start + 5;
}
