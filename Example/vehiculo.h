#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>   // para usar string
using std::string;

// clase base Vehiculo
class Vehiculo {

protected:
    string marca;        // marca del vehículo
    string modelo;       // modelo
    int anio;            // año de fabricación
    string placas;       // placas
    int kilometraje;     // kilometraje recorrido

public:

    Vehiculo();  // constructor vacío

    // constructor con todos los datos del vehículo
    Vehiculo(string marca, string modelo, int anio, string placas, int kilometraje);

    void actualizarPlacas(string nuevasPlacas);            // cambia las placas
    void actualizarKilometraje(int nuevoKilometraje);      // cambia el kilometraje

    virtual void mostrarInformacion(); // método que podrán sobrescribir las clases hijas
};

#endif
