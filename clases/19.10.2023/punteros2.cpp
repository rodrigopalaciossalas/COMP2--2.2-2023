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

    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + tam - 1) << endl;

     cout << *(ptr + tam) << endl;

    for (int i = tam-1; i >= 0 ; i--)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}

