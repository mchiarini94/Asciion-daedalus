#include <iostream>
#include <curses.h>
#include "mappe.hpp"
#include <string>

using namespace std;


int main()
{   int a=0,b=0;

    map1 o1; map2 o2;
    while (true){

      for (int i=0; i<o1.x1; i++) cout<< o1.ma1[i]<<endl;
       cin>>a;
      //apro le porte
      if (a==3){
        for (int d=0; d<o1.x1; d++){
                for (int j=0; j<o1.y1; j++){
            if (o1.ma1[d][j] == 'x') o1.ma1[d][j]=' ';}
            b=4;

        }
      }
      //se le porte sono aperte vado nell'altra stanza
      if (a==4 && b==4) break;

    }

    while (true){
      for (int i=0; i<o2.x2; i++) cout<< o2.ma2[i]<<endl;
      cin>>a;
      if (a==8){
        for (int d=0; d<o2.x2; d++){
                for (int j=0; j<o2.y2; j++){
            if (o2.ma2[d][j] == 'x') o2.ma2[d][j]=' ';}
        }
      }

      if (a==4) break;
    }

    cout << "Hello world!" << endl;
    return 0;
}
