/*#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
string leggival(){
    string str;
    do{
cout<<"inserimento stringa: ";
getline(cin,str);
    } while(str.length()>=100);
    return str;
}
int main(){
    int i;
string s1;
s1=leggival();

string s2;
 s2.resize(s1.size() * 2);
    for (i=0; i<s1.size(); i++){
         switch (s1[i]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': s2[i]=s1[i];
            i++;
            s2[i]='f';
            i++;
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': s2[i]=s1[i];
            i++;
            s2[i]='F';
            i++;
    break;
    default: 
    s2[i]=s1[i];
    break;
    } 
    }
cout<<"frase modificata: "<<s2; 
}
*/
#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

string leggiValore() {
    string str;
    do {
        cout<<"inserimento stringa: ";
        getline(cin, str);
    } while(str.length() >= 100);
    return str;
}

int main() {
    string s1;
    s1 = leggiValore();

    string s2;
    s2.resize(s1.size() * 2);
    int j = 0;
    for (int i = 0; i < s1.size(); i++){
        switch (s1[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': 
                s2[j] = s1[i];
                j++;
                s2[j] = 'f';
                j++;
                break;
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': 
                s2[j] = s1[i];
                j++;
                s2[j] = 'F';
                j++;
                break;
            default: 
                s2[j] = s1[i];
                j++;
                break;
        } 
    }
    s2.resize(j);
    cout<<"frase modificata: "<<s2; 
    return 0;
}

