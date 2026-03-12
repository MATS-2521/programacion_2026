#include "moto.h"
#include <iostream>

using namespace std;

Moto::Moto() : Vehiculo() {
    tipo = "";
    cilindraje = 0;
    numeroRuedas = 0;
}

Moto::Moto(string marca, string modelo, int anio, string placas, int kilometraje,
           string tipo, int cilindraje, int numeroRuedas)
    : Vehiculo(marca, modelo, anio, placas, kilometraje) {

    this->tipo = tipo;
    this->cilindraje = cilindraje;
    this->numeroRuedas = numeroRuedas;
}

void Moto::actualizarTipo(string nuevoTipo) {
    tipo = nuevoTipo;
}

void Moto::actualizarCilindraje(int nuevoCilindraje) {
    cilindraje = nuevoCilindraje;
}

void Moto::actualizarNumeroRuedas(int nuevoNumeroRuedas) {
    numeroRuedas = nuevoNumeroRuedas;
}

void Moto::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Tipo: " << tipo << endl;
    cout << "Cilindraje: " << cilindraje << " cc" << endl;
    cout << "Numero de ruedas: " << numeroRuedas << endl;
}