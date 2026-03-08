#include "../include/autobus.h" 
// implementación de la clase Autobus

#include <iostream>  
// para usar cout

using namespace std;


// CONSTRUCTOR VACÍO

Autobus::Autobus() : Vehiculo() {
    // llama al constructor base

    numeroPasajeros = 0;  // pasajeros iniciales
    tipoServicio = "";    // servicio vacío
}


// CONSTRUCTOR CON PARÁMETROS

Autobus::Autobus(string marca, string modelo, int anio, string placas, int kilometraje,
                 int numeroPasajeros, string tipoServicio)
    : Vehiculo(marca, modelo, anio, placas, kilometraje) 
    // inicializa los datos del Vehiculo
{
    this->numeroPasajeros = numeroPasajeros; // asigna pasajeros
    this->tipoServicio = tipoServicio;       // asigna tipo de servicio
}


// MÉTODO SOBRESCRITO

void Autobus::mostrarInformacion() {

    Vehiculo::mostrarInformacion(); 
    // muestra la información básica del vehículo

    cout << "Numero de pasajeros: " << numeroPasajeros << endl;
    cout << "Tipo de servicio: " << tipoServicio << endl;
}
