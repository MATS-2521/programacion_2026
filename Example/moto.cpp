#include "moto.h"
// implementación de la clase Moto

#include <iostream>
// para usar cout

using namespace std;


// CONSTRUCTOR VACÍO

Moto::Moto() : Vehiculo() {
    // llama al constructor base

    tipo = "";        // tipo de moto
    cilindraje = 0;   // cilindraje inicial
    numeroRuedas = 0; // ruedas iniciales
}


// CONSTRUCTOR CON PARÁMETROS

Moto::Moto(string marca, string modelo, int anio, string placas, int kilometraje,
           string tipo, int cilindraje, int numeroRuedas)
    : Vehiculo(marca, modelo, anio, placas, kilometraje) 
    // inicializa los datos heredados
{
    this->tipo = tipo;                 // asigna tipo
    this->cilindraje = cilindraje;     // asigna cilindraje
    this->numeroRuedas = numeroRuedas; // asigna número de ruedas
}


// MÉTODOS PARA ACTUALIZAR DATOS

void Moto::actualizarTipo(string nuevoTipo) {
    tipo = nuevoTipo; // cambia el tipo de moto
}

void Moto::actualizarCilindraje(int nuevoCilindraje) {
    cilindraje = nuevoCilindraje; // cambia el cilindraje
}

void Moto::actualizarNumeroRuedas(int nuevoNumeroRuedas) {
    numeroRuedas = nuevoNumeroRuedas; // cambia las ruedas
}


// MÉTODO PARA MOSTRAR INFORMACIÓN

void Moto::mostrarInformacion() {

    Vehiculo::mostrarInformacion(); 
    // muestra la información básica del vehículo

    cout << "Tipo: " << tipo << endl;
    cout << "Cilindraje: " << cilindraje << " cc" << endl;
    cout << "Numero de ruedas: " << numeroRuedas << endl;
}
