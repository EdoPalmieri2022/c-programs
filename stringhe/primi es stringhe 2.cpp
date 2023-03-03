#include <iostream> 
#include <string>
 using namespace std; 
int main() { 
string s;
cout << "Inserisci una stringa: ";
cin >> s;
 for(int i = 0; i < s.length(); i++) {
 if(/*isupper(s[i]) &&*/ (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'))
 {

 cout << 0 << endl; return 0;
} 
} 
cout << 1 << endl; 
return 1; 

}


//si poteva fare uno switch case nel ciclo for

