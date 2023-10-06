#include <iostream>

using namespace std;

int main()
{
    int cuadrados;
    int cubos;
    int entero;

    cout << "entero     cuadrados       cubos" << endl;

    for (cuadrados = -1; cuadrados < 5; cuadrados++)
    {
        cout << cuadrados + 1 << endl;
    }
    
    for (cubos = -1, cubos <5; cubos++)
    {
        cout <<cubos * cuadrados << endl; 
    }

}