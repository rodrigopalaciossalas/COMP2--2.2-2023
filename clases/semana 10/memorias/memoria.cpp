//
// Created by Usuario on 24/10/2023.
//delete x es lo que borra la momoria que hallamos utilizado por ejemplo en este caso x
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
}//puede faltar memoria y cuando eso pasa se llama memory leak