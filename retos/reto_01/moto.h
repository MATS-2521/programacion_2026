#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"
#include <string>
using std::string;

class Moto : public Vehiculo {

protected:
    string tipo;
    int cilindraje;
    int numeroRuedas;

public:
    Moto();
    Moto(string marca, string modelo, int anio, string placas, int kilometraje,
         string tipo, int cilindraje, int numeroRuedas);

    void actualizarTipo(string nuevoTipo);
    void actualizarCilindraje(int nuevoCilindraje);
    void actualizarNumeroRuedas(int nuevoNumeroRuedas);

    void mostrarInformacion() override;
};

#endif