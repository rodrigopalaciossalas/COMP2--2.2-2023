#include <iostream>

using namespace std;

class Fecha {
private:
    int mes;
    int dia;
    int año;

public:
   
    Fecha(int _mes, int _dia, int _año) {
        setMes(_mes);
        dia = _dia;
        año = _año;
    }

    
    void setMes(int _mes) {
        if (_mes >= 1 && _mes <= 12) {
            mes = _mes;
        } else {
            mes = 1; 
        }
    }

   
    int getMes() const {
        return mes;
    }

    int getDia() const {
        return dia;
    }

    int getAño() const {
        return año;
    }

    
    void displayDate() const {
        cout << mes << "/" << dia << "/" << año << endl;
    }
};

int main() {
    
    Fecha fecha(9, 12, 2023);

    cout << "Fecha: ";
    fecha.displayDate();

    return 0;
}
