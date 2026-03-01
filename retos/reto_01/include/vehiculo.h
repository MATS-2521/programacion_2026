#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using std::string;

class Vehiculo {

protected:
    string marca;
    string modelo;
    int anio;
    string placas;
    int kilometraje;

public:
    Vehiculo();
    Vehiculo(string marca, string modelo, int anio, string placas, int kilometraje);

    void actualizarPlacas(string nuevasPlacas);
    void actualizarKilometraje(int nuevoKilometraje);

    virtual void mostrarInformacion();
};

#endif