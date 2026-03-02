#include "camion.h"
#include <iostream>

using namespace std;

Camion::Camion() : Vehiculo() {
    capacidadCarga = 0;
    numeroEjes = 0;
}

Camion::Camion(string marca, string modelo, int anio, string placas, int kilometraje,
               int capacidadCarga, int numeroEjes)
    : Vehiculo(marca, modelo, anio, placas, kilometraje) {

    this->capacidadCarga = capacidadCarga;
    this->numeroEjes = numeroEjes;
}

void Camion::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
    cout << "Numero de ejes: " << numeroEjes << endl;
}