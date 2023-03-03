#include<iostream>
#include<string>
using namespace std;
string leggival(){
    string s1;
    cout<<"inserimento stringa: ";
    getline(cin,s1);
    return s1;
    
}

int main(){
    string strText, strOld, strNew;
    cout<<"inserimento StrText: ";
    getline(cin, strText);
    cout<<"inserimento StrOld: ";
    getline(cin, strOld);
    cout<<"inserimento StrNew: ";
    getline(cin, strNew);
int length=strOld.size();
int pos=strText.find(strOld);
if(pos<=strText.size()){
strText.replace(pos, length,strNew);
cout<<"stringa modificata: "<<strText;
return 0;
}
else
cout<<"non esiste l'occorrenza";
return 1;
    
}