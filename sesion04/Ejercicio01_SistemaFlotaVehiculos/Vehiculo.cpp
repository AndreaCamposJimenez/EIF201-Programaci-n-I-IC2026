#include "Vehiculo.h"
#include <iostream>
using namespace std;

namespace UNA {

    Vehiculo::Vehiculo(string nPlaca, string nMarca, int nAnio, double nKilometraje) {
        placa = nPlaca;
        marca = nMarca;
        anio = nAnio;
        kilometraje = nKilometraje;
        activo = true; 
    }
   
    string Vehiculo::getPlaca() const {
        return placa;
    }

    string Vehiculo::getMarca() const {
        return marca;
    }

    int Vehiculo::getAnio() const {
        return anio;
    }

    double Vehiculo::getKilometraje() const {
        return kilometraje;
    }

    bool Vehiculo::isActivo() const {
        return activo;
    }

    void Vehiculo::registrarKilometros(double km) {
        if (km > 0 && activo) {
            kilometraje += km;
        }
        else {
            cout << "Error: No se pueden registrar kilometros.\n";
        }
    }

    void Vehiculo::desactivar() {
        if (!activo) {
            cout << "El vehiculo ya esta fuera de servicio.\n";
        }
        else {
            activo = false;
        }
    }

    void Vehiculo::reactivar() {
        if (activo) {
            cout << "El vehiculo ya esta activo.\n";
        }
        else {
            activo = true;
        }
    }

    void Vehiculo::mostrar() const {
        cout << "Placa: " << placa << endl;
        cout << "Marca: " << marca << endl;
        cout << "Anio: " << anio << endl;
        cout << "Kilometraje: " << kilometraje << endl;
        cout << "Estado: " << (activo ? "ACTIVO" : "FUERA DE SERVICIO") << endl;
    }

}
