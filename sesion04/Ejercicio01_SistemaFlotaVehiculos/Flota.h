#ifndef FLOTA_H
#define FLOTA_H

#include "Vehiculo.h"

namespace UNA {

    class Flota {
    private:
        Vehiculo** vehiculos;
        int cantidad;
        int capacidad;

    public:
        Flota();
        ~Flota();

        void agregar(Vehiculo* nuevo);
        Vehiculo* buscarPorPlaca(string placa)const;
        void mostrarPorMarca(string marca)const;
        bool eliminar(string placa);
        int contarActivos()const;
        void mostrarTodos()const;
    };

}

#endif