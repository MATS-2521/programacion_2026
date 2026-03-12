#include <iostream>
#include "figura.h"
#include "circulo.h"
#include "rectangulo.h"

int main() {
    std::cout << "=== Sistema de Figuras Geometricas ===" << std::endl;

    Figura* f1 = new Circulo("Circulo", 5.0);
    Figura* f2 = new Rectangulo("Rectangulo", 4.0, 6.0);

    f1->describir();
    std::cout << "Area: " << f1->calcularArea() << std::endl;

    f2->describir();
    std::cout << "Area: " << f2->calcularArea() << std::endl;

    std::cout << "\n--- Tratamiento uniforme con Figura* ---" << std::endl;
    Figura* figuras[] = { f1, f2 };
    for (int i = 0; i < 2; i++) {
        figuras[i]->describir();
        std::cout << "Area: " << figuras[i]->calcularArea() << std::endl;
    }

    delete f1;
    delete f2;

    return 0;
}
