#include <iostream>

using namespace std;
int main(){
    char c;
    cout<< "ingrese un caracter xfa ";

    cin >> c;

    int val = static_cast<int>(c);

    cout << c << endl;
    
    if (65>=val && 90<=val)
    {
        cout << "es una letra mayuscula" << endl;

    }
    else
    {
        cout << "no tiene valor asignado" << endl;
    }

}
