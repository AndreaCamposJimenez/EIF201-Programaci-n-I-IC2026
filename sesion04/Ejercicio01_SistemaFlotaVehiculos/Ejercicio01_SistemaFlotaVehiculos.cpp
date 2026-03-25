#include <iostream>
#include "Flota.h"

using namespace std;
using namespace UNA;

int main() {
    Flota flota;
    int opcion;

    do {
        cout << "\n====== MENU ======\n";
        cout << "1. Registrar vehiculo\n";
        cout << "2. Buscar vehiculo por placa\n";
        cout << "3. Mostrar vehiculos por marca\n";
        cout << "4. Registrar kilometros\n";
        cout << "5. Desactivar vehiculo\n";
        cout << "6. Reactivar vehiculo\n";
        cout << "7. Eliminar vehiculo\n";
        cout << "8. Mostrar todos los vehiculos\n";
        cout << "9. Contar vehiculos activos\n";
        cout << "10. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        string placa, marca;
        int anio;
        double km;

        switch (opcion) {

        case 1:
            cout << "Placa: "; cin >> placa;
            cout << "Marca: "; cin >> marca;
            cout << "Anio: "; cin >> anio;
            cout << "Kilometraje: "; cin >> km;

            flota.agregar(new Vehiculo(placa, marca, anio, km));
            cout << "Vehiculo registrado correctamente.\n";
            break;

        case 2: {
            cout << "Placa: "; cin >> placa;
            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->mostrar();
            }
            else {
                cout << "Vehiculo no encontrado.\n";
            }
            break;
        }

        case 3:
            cout << "Marca: "; cin >> marca;
            flota.mostrarPorMarca(marca);
            break;

        case 4: {
            cout << "Placa: "; cin >> placa;
            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                cout << "Kilometros a agregar: ";
                cin >> km;
                v->registrarKilometros(km);
            }
            else {
                cout << "Vehiculo no encontrado.\n";
            }
            break;
        }

        case 5: {
            cout << "Placa: "; cin >> placa;
            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->desactivar();
            }
            else {
                cout << "Vehiculo no encontrado.\n";
            }
            break;
        }

        case 6: {
            cout << "Placa: "; cin >> placa;
            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->reactivar();
            }
            else {
                cout << "Vehiculo no encontrado.\n";
            }
            break;
        }

        case 7:
            cout << "Placa: "; cin >> placa;

            if (flota.eliminar(placa)) {
                cout << "Vehiculo eliminado correctamente.\n";
            }
            else {
                cout << "No se pudo eliminar el vehiculo.\n";
            }
            break;

        case 8:
            flota.mostrarTodos();
            break;

        case 9:
            cout << "Cantidad de vehiculos activos: "
                << flota.contarActivos() << endl;
            break;

        case 10:
            cout << "Saliendo del sistema...\n";
            break;

        default:
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 10);

    return 0;
}