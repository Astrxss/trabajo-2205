#include <iostream>
using namespace std;
int main(){

string nombre;
float notas[6], nota=0 ,promedio=0;

cout << "Para Saber el promedio de notas, Primero ingrese su nombre: ";
cin >> nombre;

for(int i = 0; i<6 ; i++){
    cout << "ingrese su " << i+1 << " nota: ";
    cin >> notas[i];


    nota = nota + notas[i];
}

promedio = nota/6;

cout << nombre << " su promedio es de: " << promedio;

return 0;
}