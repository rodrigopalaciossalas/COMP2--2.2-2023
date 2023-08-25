#include <iostream>

using namespace std;

int main()
{
    int t;
    int r;
    string operador;

    cout << "ingrese el operador: \n";
    cin >> operador;

    cout << "ingrese el primer numero: \n";
    cin >> t;

    if (operador == "potencia")
    {
        cout << "La potencia de las variables: " << t * t << endl;
    }

    else
    {
        cout << "ingrese el segundo numero: \n";
        cin >> r;

        {
            if (operador == "suma")
            {

                cout << "la suma de variables : " << t + r << endl;
            }
            if (operador == "resta")
            {
                cout << "La resta de las variables: " << t - r << endl;
            }
            if (operador == "multiplicacion")
            {
                cout << "La multiplicacion de las variables: " << t * r << endl;
            }
            if (operador == "divicion")
            {
                cout << "La divicion de las variables: " << t / r << endl;
            }
            else
            {
                cout << "operaodr no correspondido";

            }
        }
    }
    return 0;
}