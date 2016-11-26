#ifndef hand_h
#define hand_h

#include<string>
#include <vector>
#include "card.h"
#include "deck.h"
using namespace std;

class hand
{
public:

   hand(deck &dof);
   void printhand() const;
   bool pair();
   bool twopair();
   bool threepair() ;
   bool fourpair() ;
   bool flush() ;
   bool straight() ;
   int high();


private:
   vector<card> phand;
   vector<int> number;

};
#endif // hand_h
