#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main(){
string s1="oggi piove";
cout<<"stringa originale: "<<s1<<endl;
string s2;
for(int i=0; i<s1.size(); i++){
    s1[i]=toupper(s1[i]);
}
cout<<"stringa in maiuscolo: "<<s1<<endl;
s2="domani sarà bel tempo";
string s3= s1 +" "+ s2;
cout<<s3<<endl;
cout<<"lunghezza della stringa: "<<s3.length()<<endl;
for(int i=0; i<s3.length(); i++){
    switch (s3[i]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': s3[i]='i';
    break;
    default: 
    break;
    } 
}
cout<<"frase modificata: "<<s3; 

}