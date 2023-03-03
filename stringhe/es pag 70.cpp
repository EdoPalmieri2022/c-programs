#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
using namespace std;
const int TANTI = 10;
const int MAX =20;
int numeri[TANTI];
void trovaMaxMin(int &num1, int &num2) {
int x;
num1=numeri[0];
num2= numeri[0];
for (x=0; x<TANTI; x++);
if (numeri[x]<num1)
num1=numeri[x];
if (numeri[x]>num2)
num2= numeri[x];
}
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
        numeri[x]=(rand()%MAX); 
}
int main(void){
int min, max;
riempiCasuale();
trovaMaxMin(min,max);
cout<<"numero minore : "<<min<<endl;
cout<<"numero maggiore: "<<max<<endl;
mostraVettore();
//system("pause");
}