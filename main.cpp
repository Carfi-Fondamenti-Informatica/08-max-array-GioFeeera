#include <iostream>
#include "lib.h"
using namespace std;

float x=0;
int main() {
    int n=0;
    cin >>n;
    float numero [n];
    for (int i = 0; i < n; i++) {
        cin >> numero [i];
    }
    for (int i = 0; i < n; ++i) {
        float mag= maggiore(numero[i], numero[i-1]);
        if (n>x){
            x=n;
        }
        cout << x;
    }

    return 0;
}
