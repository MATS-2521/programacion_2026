#ifndef AUTOBUS_H
#define AUTOBUS_H

#include "vehiculo.h"
#include <string>
using std::string;

class Autobus : public Vehiculo {

protected:
    int numeroPasajeros;
    string tipoServicio;

public:
    Autobus();
    Autobus(string marca, string modelo, int anio, string placas, int kilometraje,
            int numeroPasajeros, string tipoServicio);

    void mostrarInformacion() override;
};

#endif