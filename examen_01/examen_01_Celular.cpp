#include "examen_01_Celular.h"
#include <iostream>

// Constructor
Celular::Celular(std::string m, std::string mod, int alm, int r, float p)
    : marca(m), modelo(mod), almacenamiento(alm), ram(r), precio(p) {}

// Método para mostrar información
void Celular::mostrarInfo() {
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Almacenamiento: " << almacenamiento << " GB" << std::endl;
    std::cout << "RAM: " << ram << " GB" << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
}

// Método para actualizar el precio
void Celular::actualizarPrecio(float nuevoPrecio) {
    precio = nuevoPrecio;
}

// Método para comparar almacenamiento
bool Celular::compararAlmacenamiento(const Celular& otro) {
    return almacenamiento > otro.almacenamiento;
}

// Ejemplo de uso en main
int main() {
    Celular c1("Samsung", "Galaxy S21", 128, 8, 799.99);
    Celular c2("Apple", "iPhone 13", 256, 6, 999.99);

    std::cout << "Información del primer celular:\n";
    c1.mostrarInfo();

    std::cout << "\nInformación del segundo celular:\n";
    c2.mostrarInfo();

    c1.actualizarPrecio(749.99);
    std::cout << "\nPrecio actualizado del primer celular:\n";
    c1.mostrarInfo();

    if (c1.compararAlmacenamiento(c2)) {
        std::cout << "\nEl primer celular tiene más almacenamiento.\n";
    } else {
        std::cout << "\nEl segundo celular tiene más almacenamiento.\n";
    }

    return 0;
}
