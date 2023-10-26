// el nombre del arreglo es un puntero al arreglo es decir que arr tiene la misma direccion 
//si los igualas puedes modificar uno en espesifico
#include <iostream>

using namespace std;

void imprimir(int *ptr, int tam)
{
    for (int i = tam-1; i >= 0 ; i--)
    {
        cout << *(ptr + i) << " ";
    }
} 

void invertir(int )

int main() {
    int arr[] = {15, 24, 30, 41, 55, 66};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << tam << endl;

    imprimir(arr, tam);


}
