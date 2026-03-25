#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

namespace UNA {

    class Vehiculo {
    private:
        string placa;
        string marca;
        int anio;
        double kilometraje;
        bool activo;

    public:
       
        Vehiculo(string placa, string marca, int anio, double kilometraje);

       
        string getPlaca() const;
        string getMarca() const;
        int getAnio() const;
        double getKilometraje() const;
        bool isActivo() const;

       
        void registrarKilometros(double km);
        void desactivar();
        void reactivar();
        void mostrar() const;
    };

}

#endif