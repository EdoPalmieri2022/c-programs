#include<iostream>
using namespace std;
int main(){
	int i;
	int j;
	int aux;
	float v[10];
	for(i=0;i<10; i++){
		cout<<"Inserisci i valori di n: ";
		cin>>v[i];
		for(j=0; j<i; j++){
			if(v[i]==v[j])
			v[i]=aux;
		}
	}
	for(i=0; i<10; i++){
	
	if(v[i]!=aux)
	cout<<v[i]<<endl;
}
}
