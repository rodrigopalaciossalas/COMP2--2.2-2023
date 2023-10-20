// el nombre del arreglo es un puntero al arreglo es decir que arr tiene la misma direccion 
//si los igualas puedes modificar uno en espesifico
#include <iostream>

using namespace std;

int main() {
    int arr[] = {15, 24, 30, 41, 55, 66};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << tam << endl;
    // el nombre del arreglo es un puntero (CONSTANTE) al primer elemento del arreglo
    cout << arr << endl;
    cout << &arr[0] << endl;

    int *ptr = arr;

    cout << *ptr << endl;
    ptr++;

    cout << *ptr << endl;
    ptr++;

    cout << *ptr << endl;
    ptr++;

    cout << *ptr << endl;
    ptr--;


return 0;
}
