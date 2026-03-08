#ifndef CAMION_H
#define CAMION_H

// Evita que el archivo se incluya varias veces
#include "vehiculo.h"

// Clase Camion que hereda de Vehiculo
class Camion : public Vehiculo {

protected:

    int capacidadCarga;   // capacidad de carga del camión
    int numeroEjes;       // número de ejes del camión

public:

    Camion();  // constructor vacío

    // constructor con todos los datos del vehículo y del camión
    Camion(string marca, string modelo, int anio, string placas, int kilometraje,
           int capacidadCarga, int numeroEjes);

    // sobrescribe el método mostrarInformacion de Vehiculo
    void mostrarInformacion() override;

};

#endif
