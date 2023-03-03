#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    int c=0;
    do {
        cout << "Inserisci una frase che contiene più di 10 caratteri: ";
        getline(cin, s1);
    } while (s1.length() <= 10);

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == '.') {
            s1[i] = '\n';
            c++;
        }
    }
     if(c==0){
        cout<<"la frase non conteneva punti ";
        return 0;
     }

    cout << "Frase modificata: " <<endl<< s1 << endl;
    return 0;
}