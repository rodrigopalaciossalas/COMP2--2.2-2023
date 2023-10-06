#include <iostream>
#include <string>
#include "class 3.9.h"

using namespace std;

int main(){

    Account c1{"usuario 1",100};
    Account c2{"usuario 2",20};

    cout << "cuenta usuario 1: " << c1.getName() << " , el saldo en soles es." << c1.getBalance()<<endl;
    cout << "cuenta usuario 2: " << c2.getName() << " , el saldo en soles es." << c2.getBalance()<<endl;

    cout << "\n Entrar la cantidad de deposito para la cuenta de: " << c1.getName()<<endl;
    int depositcuenta;
    cin >> depositcuenta;
    cout << "Añadiendo S/." << depositcuenta << " A el saldo de: " << c1.getName()<<endl;
    c1.deposit(depositcuenta);

    cout << "\n Entrar la cantidad de deposito para la cuenta de: " << c2.getName()<<endl;
    cin >> depositcuenta;
    cout << "Añadiendo S/." << depositcuenta << " A el saldo de: " << c2.getName()<<endl;
    c2.deposit(depositcuenta);

    cout << "cuenta 1: " << c1.getName() << " , el saldo en soles es." << c1.getBalance()<<endl;
    cout << "cuenta 2: " << c2.getName() << " , el saldo en soles es." << c2.getBalance()<<endl;

    cout << "\nEntrar la cantidad que desea retirar de la cuenta de: " << c1.getName()<<endl;
    int Monto;
    cin >> Monto;
    bool x;
    x = true;
    while (x==true){
        if (Monto==0){
            cout << "No puedde retirar S/.0, intentelo denuevo" << endl;
            cout << "\nEntrar la cantidad que desea retirar de la cuenta de: " << c1.getName()<<endl;
            cin >> Monto;
        }
        else {
            c1.withdraw(Monto);
            cout<<c1.getFrase()<<endl;
            x=false;
        }
    }
    
    cout << "cuenta 1: " << c1.getName() << " , el saldo en soles es." << c1.getBalance()<<endl;
    cout << "cuenta 2: " << c2.getName() << " , el saldo en soles es." << c2.getBalance()<<endl;
    return 0;
}
