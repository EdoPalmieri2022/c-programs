#include<iostream>
#include<string>
#include<time.h>
#include<stdbool.h>
using namespace std;
const int TANTI=32;
const int MAX =20;
int numeri[TANTI];

void mostraVettore(){
    int x;
    cout<<endl;
    for (x=0; x<TANTI; x++)
    cout<<numeri[x]<<" ";
    cout<<endl;

}

void riempiCasuale(){
    int x;
    srand((unsigned)time(NULL));
    for(x=0; x<TANTI; x++)
        numeri[x]=(rand()%MAX); //viene riempito un vettore di 10 numeri casuali minori uguali a 20
}

int cerca (int voluto){
    bool trovato= false;
    int x=0;
    do 
    if(numeri[x]== voluto)
        trovato=true;
    else
    x++;
    while((x<TANTI) && (trovato==false));
    if (x<TANTI)
    return x;
    else
    return -1;
    
}




int main(void){
    int num;
    int posiz;

riempiCasuale();
cout<<"inserisci il numero desiderato: ";
cin>>num;
posiz=cerca(num);
if(posiz<0)
    cout<<"il numero non è presente";
else
    cout<<"numero trovato in posizione: "<<posiz;

mostraVettore();

}