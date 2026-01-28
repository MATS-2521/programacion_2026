// main.cpp
#include <iostream>
#include "estudiante.h"

int main() {
    std::cout << "=== Sistema de Gestion de Estudiante ===" << std::endl;
    std::cout << std::endl;

    // Crear estudiante con constructor por defecto
    Estudiante estudiante1;
    std::cout << "Estudiante 1 (constructor por defecto):" << std::endl;
    estudiante1.mostrarInformacionCompleta();
    std::cout << std::endl;

    // Actualizar informacion del estudiante1
    estudiante1.actualizarNombre("Marco Antonio Trejo Sulub");
    estudiante1.actualizarCodigo("A25216863");
    estudiante1.actualizarEdad(20);
    estudiante1.actualizarPromedio(8.5f);
    estudiante1.actualizarActivo(true);

    std::cout << "Estudiante 1 despues de actualizar:" << std::endl;
    estudiante1.mostrarInformacionCompleta();
    estudiante1.calcularEstadoAcademico();
    std::cout << std::endl;

    // Crear estudiante con constructor con parametros
    Estudiante estudiante2("Juan Perez Martinez", "A85215956", 22, 7.5f, true);
    std::cout << "Estudiante 2 (constructor con parametros):" << std::endl;
    estudiante2.mostrarInformacionCompleta();
    estudiante2.calcularEstadoAcademico();
    std::cout << std::endl;

    // Incrementar edad
    std::cout << "Incrementando edad del estudiante 2:" << std::endl;
    estudiante2.incrementarEdad();
    estudiante2.mostrarEdad();
    std::cout << std::endl;

    // Probar validacion de promedio
    std::cout << "Intentando actualizar promedio con valor invalido:" << std::endl;
    estudiante2.actualizarPromedio(15.0f);
    estudiante2.mostrarPromedio();
    std::cout << std::endl;

    return 0;
}