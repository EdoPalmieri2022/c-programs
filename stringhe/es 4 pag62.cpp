#include<iostream>
#include<string> 
#include<ctype.h>
using namespace std;
bool trovadoppie(string str){
    for(int i=0; i<str.size()-1; i++){
        if(isalpha(str[i]) && isalpha(str[i+1]) && str[i]==str[i+1])
            return true;
    }
    return false;
}
int main(){
string s1;
cout<<"inserimento stringa: ";
getline(cin,s1);
if(trovadoppie(s1)==true)
cout<<"la stringa conteneva delle lettere doppie";
else
cout<<"la stringa non conteneva doppie";

return 0;


}
