#include <iostream>
#include <string>

using namespace std;

class MotorVehicle {
private:
    string marca;
    string gasolina;
    int fecha_fabricacion;
    string color;
    int cilindros;

public:
   
    MotorVehicle(const string& _marca, const string& _gasolina, int _fecha_fabricacion, const string& _color, int _cilindros)
        : marca(_marca), gasolina(_gasolina), fecha_fabricacion(_fecha_fabricacion), color(_color), cilindros(_cilindros) {}

    
    void setMarca(const string& _marca) {
        marca = _marca;
    }

    string getMarca() const {
        return marca;
    }

    void setTipoCombustible(const string& _gasolina) {
        gasolina = _gasolina;
    }

    string getTipoCombustible() const {
        return gasolina;
    }

    void setAñoFabricacion(int _fecha_fabricacion) {
        fecha_fabricacion = _fecha_fabricacion;
    }

    int getAñoFabricacion() const {
        return fecha_fabricacion;
    }

    void setColor(const string& _color) {
        color = _color;
    }

    string getColor() const {
        return color;
    }

    void setCapacidadMotor(int _cilindros) {
        cilindros = _cilindros;
    }

    int getCapacidadMotor() const {
        return cilindros;
    }

    
    void displayCarDetails() const {
        cout << "Marca: " << marca << endl;
        cout << "Tipo de Combustible: " << gasolina << endl;
        cout << "Año de Fabricación: " << fecha_fabricacion << endl;
        cout << "Color: " << color << endl;
        cout << "Capacidad del Motor: " << cilindros << " cc" << endl;
    }
};

int main() {
    
    MotorVehicle miVehiculo("Toyota", "Gasolina", 2022, "Rojo", 2000);

    
    cout << "Detalles de mi vehículo:" << endl;
    miVehiculo.displayCarDetails();

    return 0;
}
