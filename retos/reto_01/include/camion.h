#ifndef CAMION_H
#define CAMION_H

#include "vehiculo.h"

class Camion : public Vehiculo {

protected:
    int capacidadCarga;
    int numeroEjes;

public:
    Camion();
    Camion(string marca, string modelo, int anio, string placas, int kilometraje,
           int capacidadCarga, int numeroEjes);

    void mostrarInformacion() override;
};

#endif