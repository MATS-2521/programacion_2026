#ifndef CELULAR_H
#define CELULAR_H

#include <string>

class Celular {
private:
    // Atributos
    std::string marca;
    std::string modelo;
    int almacenamiento;   // en GB
    int ram;              // en GB
    float precio;         // en dólares

public:
    // Constructor
    Celular(std::string m, std::string mod, int alm, int r, float p);

    // Métodos
    void mostrarInfo();          // Muestra la información del celular
    void actualizarPrecio(float nuevoPrecio); // Cambia el precio
    bool compararAlmacenamiento(const Celular& otro); // Compara almacenamiento con otro celular
};

#endif