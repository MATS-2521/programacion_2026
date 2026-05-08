#include "autobus.h"
#include <iostream>

using namespace std;

Autobus::Autobus() : Vehiculo() {
    numeroPasajeros = 0;
    tipoServicio = "";
}

Autobus::Autobus(string marca, string modelo, int anio, string placas, int kilometraje,
                 int numeroPasajeros, string tipoServicio)
    : Vehiculo(marca, modelo, anio, placas, kilometraje) {

    this->numeroPasajeros = numeroPasajeros;
    this->tipoServicio = tipoServicio;
}

void Autobus::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Numero de pasajeros: " << numeroPasajeros << endl;
    cout << "Tipo de servicio: " << tipoServicio << endl;
}