#include <iostream>

using namespace std;

int main() {

    int x = 10;
    int *ptr = &x ; //esta delcarando el puntero
    cout << &x << endl;
    cout << ptr << endl;
    
    cout << *ptr << endl;
    *ptr = 1000;
    cout << *ptr << endl;
    cout << x << endl;

    string cad = "ciencia";
    string *ptr1 = &cad;
    cout << cad.at(0) << endl;
    cout << (*ptr1).at(0) << endl;
    cout << ptr1 -> at(0) << endl;

    cout << cad.length() << endl;

    cout << (*ptr1).length() << endl;
    cout << ptr1 -> length() << endl;

    
}