#include <iostream>
#include "hand2.h"
using namespace std;

//give away five cards to player
hand2::hand2(deck &dof):number2(card::cardface)
{
    unsigned j=0;
   for (j = 0; j < 10; j++)
      phand2.push_back(dof.deal());

   for ( j = 5; j < 10; j++)
      ++number2[phand2[j].getface()];
}
//display cards in the players hands
void hand2::printhand() const
{
    unsigned j;
   cout << "Cards in player2's hand is:\n";
   for ( j = 5; j< 10; j++)
      cout << phand2[j].ts() << '\n';
   cout << endl;
}

//a two pair is two different numbers that have a pair
bool hand2::twopair()
{

   int counter =0;
   unsigned j;

   for (j = 0; j < number2.size(); j++)
   {
      if (number2[j]== 2)
        counter++;
      if (counter ==2)
         return true;

   }


   return false;
}

//a pair is when there are two of the same number
bool hand2::pair()
{
    unsigned j;
   for (j = 0; j < number2.size(); j++)
      if (number2[j] == 2)
         return true;

   return false;
}


//three of the same number in hand
bool hand2::threepair()
{
    unsigned j;
   for (j = 0; j < number2.size(); j++)
      if (number2[j] == 3)
         return true;

   return false;
}
//four of the same number in players hand
bool hand2::fourpair()
{
    unsigned j;
   for (j = 0; j< number2.size(); j++)
   {
    if (number2[j] == 4)
         return true;
   }


   return false;
}
//suits are all the same in the hand
bool hand2::flush()
{
   unsigned j;
   int suit;
   suit = phand2[0].getsuit();

   for (j = 1; j < 5; j++)
      if (phand2[j].getsuit() != suit)
         return false;

   return true;
}
//cards are in numeral order in hand
bool hand2::straight()
{
   vector<int> x = number2;
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
