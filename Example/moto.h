#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"   // clase base
#include <string>

using std::string;

// clase Moto que hereda de Vehiculo
class Moto : public Vehiculo {

protected:
    string tipo;        // tipo de moto (deportiva, urbana, etc.)
    int cilindraje;     // cilindraje en cc
    int numeroRuedas;   // número de ruedas

public:

    Moto();  // constructor vacío

    // constructor con todos los datos del vehículo y la moto
    Moto(string marca, string modelo, int anio, string placas, int kilometraje,
         string tipo, int cilindraje, int numeroRuedas);

    void actualizarTipo(string nuevoTipo);              // cambia el tipo
    void actualizarCilindraje(int nuevoCilindraje);     // cambia el cilindraje
    void actualizarNumeroRuedas(int nuevoNumeroRuedas); // cambia el número de ruedas

    void mostrarInformacion() override; // sobrescribe el método de Vehiculo
};

#endif
