#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;
    cout << "Inserisci una frase (max 100 caratteri): ";
    getline(cin, frase); 
    if (frase.length() > 100) {
        cout << "La frase inserita supera i 100 caratteri consentiti." << endl;
        return 1; 
    }

    bool nuovaparola = true; 
    for (int i = 0; i < frase.length(); i++) {
        char c = frase[i];
        if (isspace(c)) {  
            nuovaparola = true;
        } else if (nuovaparola==true) { 
            cout <<" "<< (char)toupper(c); 
            nuovaparola = false;
        } else { 
            cout << (char)tolower(c);
        }
    }

    return 0; 
}
/*
#include<iostream>
#include<string>
using namespace std;
string leggival(){
    string str;
    do{
    cout<<"inserimento stringa: ";
    getline(cin,str);
    }while (str.size()>100);
    
    return str;
} 
int main(){
    string s1=leggival();
    for(int i=0; i<s1.size(); i++){
        if(isalpha(s1[i]))
            s1[i]=tolower(s1[i]);
    }
    for(int i=0; i<s1.size(); i++){
        if(i==0 && isalpha(s1[i]))
            s1[i]=toupper(s1[i]);
        if(isspace(s1[i]) && isalpha(s1[i+1]) )
            s1[i+1]=toupper(s1[i+1]);
    }
      
cout<<s1;  
    }