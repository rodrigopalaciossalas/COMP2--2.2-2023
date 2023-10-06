#include <iostream>

using namespace std;

int main()
{

    int cir;

    cout << "la sircunferencia: " << endl;

    cin >> cir;

    cout << "El diametro es: "<< (cir * 2) << " de la sircunferencia"<<endl;
    cout << "\n Y el perimetro es: " << 3.14159 * (cir * 2) << " de la sircunferencia"<<endl;
    cout << "\n Y el area es: "<< 3.14159 * (cir * cir) << " de la sircunferencia"<<endl;

    return 0;

}