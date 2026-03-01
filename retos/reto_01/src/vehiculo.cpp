#include "../include/vehiculo.h"
#include <iostream>

using namespace std;

Vehiculo::Vehiculo() {
    marca = "";
    modelo = "";
    anio = 0;
    placas = "";
    kilometraje = 0;
}

Vehiculo::Vehiculo(string marca, string modelo, int anio, string placas, int kilometraje) {
    this->marca = marca;
    this->modelo = modelo;
    this->anio = anio;
    this->placas = placas;
    this->kilometraje = kilometraje;
}

void Vehiculo::actualizarPlacas(string nuevasPlacas) {
    placas = nuevasPlacas;
}

void Vehiculo::actualizarKilometraje(int nuevoKilometraje) {
    kilometraje = nuevoKilometraje;
}

void Vehiculo::mostrarInformacion() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Anio: " << anio << endl;
    cout << "Placas: " << placas << endl;
    cout << "Kilometraje: " << kilometraje << endl;
}