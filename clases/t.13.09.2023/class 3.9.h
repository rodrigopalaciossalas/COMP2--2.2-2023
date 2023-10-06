#include <iostream>
#include <string>
using namespace std;

class Account {
    public:

        Account(string accountName, int balance)
            : name{accountName} {
            if (balance>0){
                balance = balance;
            }
        }

        void deposit(int depositcuenta) {
            if (depositcuenta>0){
                balance = balance + depositcuenta;
            }
        }

        void withdraw(int Monto){
            if (Monto<=balance){
                balance = balance-Monto;
                frase = "Retiro validado";
            }
            else {
                frase="eccede el monto de la cuenta";
            }
        }

        int getBalance() const {
            return balance;
        }

        void setName(string accountName){
            name = accountName;
        }

        string getName() const {
            return name;
        }

        string getFrase() const {
            return frase;
        }
    private:
        string name;
        int balance{0};
        string frase;
};