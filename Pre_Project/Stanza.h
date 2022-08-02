#ifndef Stanza_H
#define Stanza_H
#include <iostream>
using namespace std;

class Stanza
{   protected:
     int lunghezza, altezza;
      int x_personaggio, y_personaggio;


    public:
        Stanza( int l,  int a, int x, int y);
        void stampa();
        void muovi();
};

#endif
