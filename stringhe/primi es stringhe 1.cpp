//scrivi una funzione che ritorna vero (0) se due stringhe
//sono identiche oppure un numero che indica quanti caratteri consecutivi sono uguali.
// a>b?a:b. se è vera mette a altrimenti b 
// per la lunghezza della stringa == str1.size() 
/*  
lui sostanzialmente guarda se sono uguali (attraverso la funzione compare). 
se non lo sono, attraverso un ciclo for guarda quali sono differenti
*/
#include<iostream>
#include<string>
using namespace std;

void switc(string &s1, string &s2){

    if (s1<s2){
string s3;
s3=s1;
s1=s2;
s2=s3;

    }

}
int main(){
    string s1;
    string s2;
    int c;
    int n;
    cout<<"inserimento stringa 1: ";
    cin>>s1;
    cout<<"inserimento stringa 2: ";
    cin>>s2;
    switc(s1,s2);
    n=s1.size();
    for(int i=0; i<n; i++){
     //s1.compare(s2);
     if (s1[i]==s2[i])
     c++;
     else
     break;
     }
     cout<<c;
} 


/* ESERCIZIO DEL PROF 
#include<iostream>
#include<string>
#define max(a,b) a>b?a:b
using namespace std;
int maxlung;
int j=0;
int confronta (string str1, string str2){
    if(str1.compare(str2)==0)
        return 0;
    else
         
         maxlung=max(str1.size(),str2.size());
        for (int i=0; i<maxlung and j==0; i++)
            if (str1[i]!=str2[i])
                j=1;
            return j+1;  
}

int main(){
    string s1;
    string s2; 
    cout<<"inserimento due stringhe: ";
    cin>>s1;
    cin>>s2;
    cout<<confronta(s1,s2);
}
*/