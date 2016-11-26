
#include <iostream>
#include <iomanip>
#include "deck.h"
#include "hand.h"
#include "hand2.h"

using namespace std;

int player1();
int player2();
int main()
{
   deck deck;
   deck.shufflecards();

   hand hand(deck);
   hand2 hand2(deck);
   hand.printhand();
    if (player1()==1)
        cout << "Player1 has a flush" << endl<<endl;
    else if (player1()==2)
        cout << "Player1 has four of a kind" << endl<<endl;
    else if (player1()==3)
        cout << "player1 has a straight" << endl<<endl;
    else if (player1()==4)
        cout << "player1 has a three of a kind" << endl<<endl;
    else if (player1()==5)
        cout << "player1 has a two pairs " << endl<<endl;
    else if (player1()==6)
        cout << "player1 has a pair" << endl<<endl;
    else if (player1()==7)
        cout <<"player1 has no type of pair,no flush and no straight"<<endl<<endl;

   hand2.printhand();
        if (player2()==1)
        cout << "Player2 has a flush" << endl<<endl;
    else if (player2()==2)
        cout << "Player2 has four of a kind" << endl<<endl;
    else if (player2()==3)
        cout << "player2 has a straight" << endl<<endl;
    else if (player2()==4)
        cout << "player2 has a three of a kind" << endl<<endl;
    else if (player2()==5)
        cout << "player2 has a two pairs " << endl<<endl;
    else if (player2()==6)
        cout << "player2 has a pair" << endl<<endl;
    else if (player2()==7)
        cout <<"player2 has no type of pair,no flush and no straight"<<endl<<endl;



    if (player1()<player2())
        cout<<"Player1 has the better hand"<<endl;
    else if (player1()>player2())
        cout<<"Player2 has the better hand"<<endl;


}

int player1()
{

   deck deck;
   deck.shufflecards();

   hand hand(deck);




    if (hand.fourpair())
    {
        return 2;
    }
    else if (hand.twopair())
    {
        return 5;
    }
    else if (hand.straight())
    {
        return 3;
    }

    else if (hand.flush())
    {
        return 1;
    }


    else if (hand.threepair())
    {

        return 4;
    }
    else if (hand.pair())
    {
        return 6;
    }
    else
        return 7;



}
int player2()
{

   deck deck;
   deck.shufflecards();

   hand2 hand2(deck);




    if (hand2.fourpair())
    {

        return 2;
    }
    else if (hand2.twopair())
    {
        return 5;
    }
    else if (hand2.straight())
    {
        return 3;
    }

    else if (hand2.flush())
    {

        return 1;
    }


    else if (hand2.threepair())
    {

        return 4;
    }

    else if (hand2.pair())
    {

        return 6;
    }
    else
        return 7;



}
