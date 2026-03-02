#include <iostream>
#include "../include/moto.h"
#include "../include/camion.h"
#include "../include/autobus.h"

using namespace std;

int main() {

    Moto moto1("Yamaha", "R15", 2023, "ABC123", 5000, "Deportiva", 150, 2);
    Camion camion1("Volvo", "FH", 2020, "TRK789", 120000, 20, 3);
    Autobus bus1("Mercedes", "Sprinter", 2021, "BUS456", 80000, 40, "Urbano");

    int opcion;
    string nuevasPlacas;

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

        switch(opcion) {

            case 1:
                moto1.mostrarInformacion();
                break;

            case 2:
                cout << "Nueva placa: ";
                cin >> nuevasPlacas;
                moto1.actualizarPlacas(nuevasPlacas);
                break;

            case 3:
                camion1.mostrarInformacion();
                break;

            case 4:
                cout << "Nueva placa: ";
                cin >> nuevasPlacas;
                camion1.actualizarPlacas(nuevasPlacas);
                break;

            case 5:
                bus1.mostrarInformacion();
                break;

            case 6:
                cout << "Nueva placa: ";
                cin >> nuevasPlacas;
                bus1.actualizarPlacas(nuevasPlacas);
                break;

        }

    } while(opcion != 7);

    return 0;
}