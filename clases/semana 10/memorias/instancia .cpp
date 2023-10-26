//
// Created by Usuario on 24/10/2023.
//
//dis es un puntero de la inplmentacion de la clase asi que trabaja con ->
// se usa para hacer referencia a la inplementacion de funciones oo variables de una clase
// asi qeu this -> val se podria confunddir con el argumento inplementado
// puede ir en cualquier inplementacon de clase
// anvito y memoria
#include <iostream>
using namespace std;
int *getPtrToFive() {
    int *x = new int;
    *x = 5;
    return x;
}
int main() {
    int *p = getPtrToFive();
    cout << *p << endl; // 5
    delete p;
}