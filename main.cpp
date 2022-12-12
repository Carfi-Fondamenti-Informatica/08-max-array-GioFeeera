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
    for (int i = 1; i < n; i++) {
        float m= maggiore(numero[i], numero[i-1]);
        if (m>x){
            x=m;
        }
    }    
        cout << x;
    

    return 0;
}
