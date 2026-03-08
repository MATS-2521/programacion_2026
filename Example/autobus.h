#ifndef AUTOBUS_H
#define AUTOBUS_H

// evita que el archivo se incluya varias veces
#include "vehiculo.h"

#include <string>
using std::string;

// clase Autobus que hereda de Vehiculo
class Autobus : public Vehiculo {

protected:

    int numeroPasajeros;   // capacidad de pasajeros
    string tipoServicio;   // tipo de servicio (urbano, escolar, etc.)

public:

    Autobus();  // constructor vacío

    // constructor con datos del vehículo y del autobús
    Autobus(string marca, string modelo, int anio, string placas, int kilometraje,
            int numeroPasajeros, string tipoServicio);

    // sobrescribe el método mostrarInformacion de Vehiculo
    void mostrarInformacion() override;

};

#endif
