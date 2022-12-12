#include<iostream>
#define N 50
using namespace std;
int main(){
	int d;
	cout<<"inserisci dimensione vettore"<<endl;
	cin>>d;
int v[d];
cout<<"riempi il vettore"<<endl;
for (int i=0; i<d; i++ ){
cin>>v[i];
}
cout<<"il vettore e' "<<endl;
for (int i=0; i<d; i++ ){

cout<<v[i]<<endl;
}

}
