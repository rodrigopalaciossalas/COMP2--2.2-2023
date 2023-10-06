#include <iostream>

using namespace std;

int main(){
    
//variables

    int num1;
    int num2;

//datos

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

//comparacion

    if (num1%2==0)

        cout << "El numero " << num1 << " es par" << endl;

    else

        cout << "El numero " << num1 << " es impar" << endl;
    
    if (num2%2==0)

        cout << "El numero " << num2 << " es par" << endl;

    else

        cout << "El numero " << num2 << " es impar" << endl;

//suma
    
    int n3=num1+num2;
    
    if (n3%2==0)

        cout << "La suma de " << num1 << " mas " << num2 << " es par" << endl;

    else

        cout << "La suma de " << num1 << " mas " << num2 << " es impar" << endl;

    return 0;
}