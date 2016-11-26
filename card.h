#ifndef card_h
#define card_h
#include <string>

using namespace std;

class card
{
public:

    card(int face,int suit);
    string ts() const;
    static const int cardface = 13;
    static const int cardsuit =4;

   int getface() const
   {
      return face;
   }


    int getsuit() const
   {
      return suit;
   }



private:
    int face;
    int suit;

static string facesofcards[];
static string suitsofcards[];
};
#endif // CARD_H
