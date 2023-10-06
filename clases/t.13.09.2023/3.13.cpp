#include <iostream>
#include <string>
#include "class 3.9.h" 

using namespace std;


void displayAccount(const Account& accountToDisplay) {
    cout << "Cuenta " << accountToDisplay.getName() << ": ";
    cout << "El saldo en soles es S/." << accountToDisplay.getBalance() << endl;
}

int main() {
    Account c1{"usuario 1", 100};
    Account c2{"usuario 2", 20};

   
    displayAccount(c1);
    displayAccount(c2);

    int d_cuenta;

   
    cout << "\n cantidad del deposito: " << c1.getName() << endl;
    cin >> d_cuenta;
    cout << "deposito S/." << d_cuenta << " al saldo de: " << c1.getName() << endl;
    c1.deposit(d_cuenta);

    cout << "\n cantidad del deposito: " << c2.getName() << endl;
    cin >> d_cuenta;
    cout << "deposito S/." << d_cuenta << " al saldo de: " << c2.getName() << endl;
    c2.deposit(d_cuenta);

    
    displayAccount(c1);
    displayAccount(c2);

    int Monto;
    bool x = true;

   
    cout << "\n numero que desea retirar: " << c1.getName() << endl;
    cin >> Monto;
//intento de while
    while (x) {
        if (Monto == 0) {
            cout << "no se puedo retirar vuelvalo a intentar." << endl;
            cout << "\n numero que desea retirar: " << c1.getName() << endl;
            cin >> Monto;
        } else {
            c1.withdraw(Monto);
            cout << c1.getFrase() << endl;
            x = false;
        }
    }

    displayAccount(c1);
    displayAccount(c2);

    return 0;
}
