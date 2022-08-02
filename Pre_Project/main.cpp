#include <iostream>
#include <string>
#include "Stanza.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

      Stanza map1(15,15, 3 ,2);
      Stanza map2(15,15, 7 ,8);
      Stanza a[2] = {map1,map2};
      a[1].stampa();
      a[0].stampa();



    return 0;
}
