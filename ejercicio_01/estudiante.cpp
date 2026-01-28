// estudiante.cpp
#include "estudiante.h"
#include <iostream>
#include <iomanip>

Estudiante::Estudiante()
    : nombre(""), codigo(""), edad(0), promedio(0.0f), activo(false) {}

Estudiante::Estudiante(const std::string& nombre, const std::string& codigo, int edad, float promedio, bool activo)
    : nombre(nombre), codigo(codigo), edad(edad), promedio(0.0f), activo(activo)
{
    if (promedio >= 0.0f && promedio <= 10.0f) {
        this->promedio = promedio;
    } else {
        std::cerr << "Error: El promedio debe estar entre 0.0 y 10.0" << std::endl;
        this->promedio = 0.0f;
    }
}

void Estudiante::actualizarNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Estudiante::actualizarCodigo(const std::string& nuevoCodigo) {
    codigo = nuevoCodigo;
}

void Estudiante::actualizarEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

void Estudiante::actualizarPromedio(float nuevoPromedio) {
    if (nuevoPromedio >= 0.0f && nuevoPromedio <= 10.0f) {
        promedio = nuevoPromedio;
    } else {
        std::cerr << "Error: El promedio debe estar entre 0.0 y 10.0" << std::endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado) {
    activo = nuevoEstado;
}

std::string Estudiante::obtenerNombre() const {
    return nombre;
}

std::string Estudiante::obtenerCodigo() const {
    return codigo;
}

int Estudiante::obtenerEdad() const {
    return edad;
}

float Estudiante::obtenerPromedio() const {
    return promedio;
}

bool Estudiante::obtenerActivo() const {
    return activo;
}

void Estudiante::mostrarNombre() const {
    std::cout << "Nombre: " << nombre << std::endl;
}

void Estudiante::mostrarCodigo() const {
    std::cout << "Codigo: " << codigo << std::endl;
}

void Estudiante::mostrarEdad() const {
    std::cout << "Edad: " << edad << std::endl;
}

void Estudiante::mostrarPromedio() const {
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Promedio: " << promedio << std::endl;
    std::cout.unsetf(std::ios_base::floatfield);
}

void Estudiante::mostrarActivo() const {
    std::cout << "Estado: " << (activo ? "Activo" : "Inactivo") << std::endl;
}

void Estudiante::mostrarInformacionCompleta() const {
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
}

void Estudiante::incrementarEdad() {
    ++edad;
}

void Estudiante::calcularEstadoAcademico() const {
    if (promedio >= 9.0f && promedio <= 10.0f) {
        std::cout << "Estado academico: Excelente" << std::endl;
    } else if (promedio >= 8.0f && promedio < 9.0f) {
        std::cout << "Estado academico: Muy Bueno" << std::endl;
    } else if (promedio >= 7.0f && promedio < 8.0f) {
        std::cout << "Estado academico: Bueno" << std::endl;
    } else if (promedio >= 6.0f && promedio < 7.0f) {
        std::cout << "Estado academico: Regular" << std::endl;
    } else {
        std::cout << "Estado academico: Necesita Mejorar" << std::endl;
    }
}