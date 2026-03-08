#include "camion.h" 
// implementación de la clase Camion

#include <iostream> 
// para usar cout

using namespace std;


// CONSTRUCTOR VACÍO

Camion::Camion() : Vehiculo() {
    // llama al constructor vacío de Vehiculo

    capacidadCarga = 0;  // carga inicial
    numeroEjes = 0;      // ejes iniciales
}


// CONSTRUCTOR CON PARÁMETROS

Camion::Camion(string marca, string modelo, int anio, string placas, int kilometraje,
               int capacidadCarga, int numeroEjes)
    : Vehiculo(marca, modelo, anio, placas, kilometraje) 
    // inicializa los datos del Vehiculo
{

    this->capacidadCarga = capacidadCarga; // asigna capacidad
    this->numeroEjes = numeroEjes;         // asigna ejes
}


// MÉTODO SOBRESCRITO

void Camion::mostrarInformacion() {

    Vehiculo::mostrarInformacion(); 
    // muestra la info básica del vehículo

    cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;

    cout << "Numero de ejes: " << numeroEjes << endl;
}
    // Imprime el número de ejes del camión.
}
