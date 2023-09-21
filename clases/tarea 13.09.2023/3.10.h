#include <iostream>
#include <string>

using namespace std;

class Factura {
private:
    string n_pierza;
    string desc_A;
    int porcentaje;
    int p_articulo;
    double impuestos;
    double descuento;

public:
   
    Factura(const string& num_pieza, const string& desc, int cant, int precio)
        : n_pierza(num_pieza), desc_A(desc), impuestos(0.20), descuento(0.0) {
        
        if (cant > 0) {
            porcentaje = cant;
        } else {
            porcentaje = 0;
        }

        if (precio > 0) {
            p_articulo = precio;
        } else {
            p_articulo = 0;
        }
    }

  
    void setNumeroDePieza(const string& num_pieza) 
    {
        n_pierza = num_pieza;
    }

    string getNumeroDePieza() const {
        return n_pierza;
    }

    void setdesc_A(const string& desc) {
        desc_A = desc;
    }

    string getdesc_A() const {
        return desc_A;
    }

    void setporcentaje(int cant) {
        if (cant > 0) {
            porcentaje = cant;
        }
    }

    int getporcentaje() const {
        return porcentaje;
    }

    void setPrecioPorArticulo(int precio) {
        if (precio > 0) {
            p_articulo = precio;
        }
    }

    int getPrecioPorArticulo() const {
        return p_articulo;
    }

    void setimpuestos(double impuesto) {
        impuestos = impuesto;
    }

    double getimpuestos() const {
        return impuestos;
    }

    void setDescuento(double desc) {
        descuento = desc;
    }

    double getDescuento() const {
        return descuento;
    }

    double getInvoiceAmount() const {
        double subtotal = porcentaje * p_articulo;
        double impuestos = subtotal * impuestos;
        double descuentoTotal = subtotal * descuento;
        double total = subtotal + impuestos - descuentoTotal;
        return total;
    }
};

int main() {
    Factura factura("001", "Martillo", 2, 10);

    cout << "Número de Pieza: " << factura.getNumeroDePieza() << endl;
    cout << "Descripción: " << factura.getdesc_A() << endl;
    cout << "cantidad: " << factura.getporcentaje() << endl;
    cout << "Precio por Artículo: " << factura.getPrecioPorArticulo() << endl;
    cout << "impuestos: " << factura.getimpuestos() << endl;
    cout << "Descuento: " << factura.getDescuento() << endl;
    cout << "Monto de la Factura: " << factura.getInvoiceAmount() << endl;

    return 0;
}
