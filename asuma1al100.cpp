#include <iostream>
using namespace std;
int main(){

    int numeros[100],total=0;

    for (int i = 0; i<100; i++){
        numeros[i]=i+1;
        cout << numeros[i] << endl;
        total= total+numeros[i];
    }
    cout << "La suma del 1 al 100 es: " << total;

    return 0; 
}