#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int TANTI = 10;

    int v[TANTI];
    v[0] = rand() % 10;
    for (int i = 1; i < TANTI; i++) {
        v[i] = v[i - 1] + rand() % 10;
    }

    for (int i = 0; i < TANTI; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}


