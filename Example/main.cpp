#include <iostream>     
#include "moto.h"
#include "camion.h"
#include "autobus.h"

using namespace std;

int main() {

    // Crear objetos de cada tipo de vehículo
    Moto moto1("Yamaha", "R15", 2023, "ABC123", 5000, "Deportiva", 150, 2);
    Camion camion1("Volvo", "FH", 2020, "TRK789", 120000, 20, 3);
    Autobus bus1("Mercedes", "Sprinter", 2021, "BUS456", 80000, 40, "Urbano");

    int opcion;          // opción elegida en el menú
    string nuevasPlacas; // variable para actualizar placas

    // ciclo del menú (se repite hasta elegir salir)
    do {

        cout << "\n--- MENU ---\n";
        cout << "1. Mostrar Moto\n";
        cout << "2. Cambiar placas Moto\n";
        cout << "3. Mostrar Camion\n";
        cout << "4. Cambiar placas Camion\n";
        cout << "5. Mostrar Autobus\n";
        cout << "6. Cambiar placas Autobus\n";
        cout << "7. Salir\n";
        cout << "Opcion: ";

        cin >> opcion;

        // ejecutar acción según la opción seleccionada
        switch(opcion) {

            case 1:
                moto1.mostrarInformacion(); // mostrar datos de la moto
                break;

            case 2:
                cout << "Nueva placa: ";
                cin >> nuevasPlacas;
                moto1.actualizarPlacas(nuevasPlacas); // actualizar placas
                break;

            case 3:
                camion1.mostrarInformacion(); // mostrar datos del camión
                break;

            case 4:
                cout << "Nueva placa: ";
                cin >> nuevasPlacas;
                camion1.actualizarPlacas(nuevasPlacas); // actualizar placas
                break;

            case 5:
                bus1.mostrarInformacion(); // mostrar datos del autobús
                break;

            case 6:
                cout << "Nueva placa: ";
                cin >> nuevasPlacas;
                bus1.actualizarPlacas(nuevasPlacas); // actualizar placas
                break;

        }

    } while(opcion != 7); // termina cuando el usuario elige salir

    return 0; // fin del programa
}
