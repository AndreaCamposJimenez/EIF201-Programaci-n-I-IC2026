#include "Flota.h"
#include <iostream>
using namespace std;

namespace UNA {

    
    Flota::Flota() {
        capacidad = 3;
        cantidad = 0;
        vehiculos = new Vehiculo * [capacidad];
    }

    Flota::~Flota() {
        for (int i = 0; i < cantidad; i++) {
            delete vehiculos[i];
        }
        delete[] vehiculos;
    }

  
    void Flota::agregar(Vehiculo* nuevo) {
        if (cantidad == capacidad) {
            capacidad *= 2;
            Vehiculo** nuevoArreglo = new Vehiculo * [capacidad];

            for (int i = 0; i < cantidad; i++) {
                nuevoArreglo[i] = vehiculos[i];
            }

            delete[] vehiculos;
            vehiculos = nuevoArreglo;
        }

        vehiculos[cantidad++] = nuevo;
    }

   
    Vehiculo* Flota::buscarPorPlaca(string placa)const {
        for (int i = 0; i < cantidad; i++) {
            if (vehiculos[i]->getPlaca() == placa) {
                return vehiculos[i];
            }
        }
        return nullptr;
    }

   
    void Flota::mostrarPorMarca(string marca)const {
        int contador = 0;

        for (int i = 0; i < cantidad; i++) {
            if (vehiculos[i]->getMarca() == marca) {
                vehiculos[i]->mostrar();
                contador++;
            }
        }

        if (contador == 0) {
            cout << "No hay vehiculos de esa marca.\n";
        }
        else {
            cout << "Cantidad: " << contador << endl;
        }
    }

    
    bool Flota::eliminar(string placa) {
        for (int i = 0; i < cantidad; i++) {
            if (vehiculos[i]->getPlaca() == placa) {

                if (vehiculos[i]->isActivo()) {
                    cout << "Debe desactivar el vehiculo primero.\n";
                    return false;
                }

                delete vehiculos[i];

                for (int j = i; j < cantidad - 1; j++) {
                    vehiculos[j] = vehiculos[j + 1];
                }

                cantidad--;
                return true;
            }
        }
        return false;
    }

    int Flota::contarActivos()const{
        int contador = 0;

        for (int i = 0; i < cantidad; i++) {
            if (vehiculos[i]->isActivo()) {
                contador++;
            }
        }

        return contador;
    }

    
    void Flota::mostrarTodos()const {
        if (cantidad == 0) {
            cout << "No hay vehiculos registrados.\n";
            return;
        }

        for (int i = 0; i < cantidad; i++) {
            vehiculos[i]->mostrar();
            cout << "------------------\n";
        }
    }

}