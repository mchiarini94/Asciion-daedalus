#include "Stanza.h"

Stanza::Stanza(int l,int a, int x, int y)
{
    this->lunghezza = l;
    this->altezza = a;
    this->x_personaggio = x;
    this->y_personaggio = y;


}

void Stanza::stampa(){
  int x=0,y=0;
  string arra[this->lunghezza][this->altezza];




    //Fare il design della mappa

     for (x=0; x<this->lunghezza ; x++)
    {  for (y=0; y<this->altezza; y++)
        {
         if (( (x==0 && y==0) || (x==0 && y==this->altezza-1) )  || ((x==this->lunghezza-1 && y==0)|| (x==this->lunghezza-1 && y==this->altezza-1))) { //se x è il primo elemento o l'ultimo, ossia i confini dell'array x
            arra[x][y]="+"; // sono i confini della mappa, il bordo orizzontale
           }
         else if (y==0 || y==this->altezza-1) { //se y è il primo elemento o l'ultimo, ossia i confini dell'array y
            arra[x][y]="|";//sono i confini della mappa, il bordo verticale
            }
         else if (x==0 || x==this->lunghezza-1) { //se y è il primo elemento o l'ultimo, ossia i confini dell'array y
            arra[x][y]="-";//sono
         }







        else{
             arra[x][y]= " "; // i puntini che Pacman dovrà mangiare
             }

        }

    }



    //<Posizione personaggio

     arra[this->x_personaggio][this->y_personaggio]= "P"; //Pacman nella mappam ovvero il suo punto iniziale in 4,3
      //[n][m] saranno responsabili del movimento di pacman



   //Stampo la staza
     for (int i=0; i<15 ; i++)
    {  for (int j=0; j<15; j++)
        {
            cout<< arra[i][j];
        }
        cout<<endl;

    }

    //Stanza::muovi();
}

/*void Stanza::muovi(){

 while (true) { // loop infinito per far muovere Pacman sempre
         cout<<"\nFai la mossa";
         int movimento;
         cin>>movimento;




         //MOVIMENTO VERSO IL BASSO
         if (movimento == 's'){
                this->x_personaggio++;
                if (this->x_personaggio>0) {
                    arra[this->x_personaggio-1][this->y_personaggio]=" "; //cancello la posizione precedente di Pacman, così mangia anche il puntino
                }
           system ("cls"); //per riaggiornare la mappa ogni volta
         }
         //MOVIMENTO VERSO L'ALTO
         if (movimento == 'w'){
                this->x_personaggio--;
                if (n>0) {
                    arra[this->x_personaggio+1][this->y_personaggio]=" "; //cancello la posizione precedente di Pacman, così mangia anche il puntino
                }
          system ("cls"); //per riaggiornare la mappa ogni volta
         }


         //MOVIMENTO VERSO SINISTRA

         if (movimento == 'a'){
                this->y_personaggio--;
                if (this->y_personaggio>0) {
                    arra[this->x_personaggio][this->y_personaggio+1]=" "; //cancello la posizione precedente di Pacman, così mangia anche il puntino
                }
           system ("cls"); //per riaggiornare la mappa ogni volta

         }

         //MOVIMENTO VERSO DESTRA

         if (movimento == 'd'){
                this->y_personaggio++;
                if (m>0) {
                    arra[this->x_personaggio][this->y_personaggio-1]=" "; //cancello la posizione precedente di Pacman, così mangia anche il puntino
                }
          system ("cls"); //per riaggiornare la mappa ogni volta
         }




         if(arra[n][m]=="|") {
             system ("cls");
             cout<<"SEI ANDATO CONTRO L'OSTACOLO COGLIONE"<<endl<< "GAME OVER"<<endl;
             break;
         }

         arra[n][m]= "P";
         for (x=0; x<15 ; x++)
          {  for (y=0; y<15; y++)
             {
                 cout<< arra[x][y]<<" ";
              }
             cout<<endl;

           }



}*/
