#include <iostream>
#include <string>

using namespace std; 

class Cuenta {
private:
    unsigned int cuenta;

    string nombre;
    string apellido;
    double saldo;


public:
   
    Cuenta(unsigned int cuenta, const string& nombre, const string& apellido, double saldo)
        : cuenta(cuenta), nombre(nombre), apellido(apellido), saldo(saldo) {
        
    }

   
    double getSaldo() const {
        return saldo;
    }
};

int main() 
{
   
    Cuenta cuenta1(12345, "Arnold", "Tacca", 1000.0);

    cout << "Saldo de cuenta en soles es: " << cuenta1.getSaldo() << endl;

    return 0;
}
