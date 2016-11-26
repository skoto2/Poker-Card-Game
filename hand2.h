#ifndef hand2_h
#define hand2_h
#include<string>
#include <vector>
#include "card.h"
#include "deck.h"
using namespace std;

class hand2
{
public:

   hand2(deck &dof);
   void printhand() const;
   bool pair();
   bool twopair();
   bool threepair() ;
   bool fourpair() ;
   bool flush() ;
   bool straight() ;


private:
   vector<card> phand2;
   vector<int> number2;

};
#endif // hand_h
