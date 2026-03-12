#include "circulo.h"

// Constructor
Circulo::Circulo(std::string nombre, double radio) : Figura(nombre), radio(radio) {}

// Área usando valor fijo de π
double Circulo::calcularArea() {
    return 3.14159 * radio * radio;
}

void Circulo::describir() {
    std::cout << "Figura: " << nombre << ", radio: " << radio << std::endl;
}

double Circulo::obtenerRadio() {
    return radio;
}