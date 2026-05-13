#ifndef HISTORIAL_DOBLE_H
#define HISTORIAL_DOBLE_H

#include "NodoHistorial.h"

namespace EIF201 {

    class HistorialDoble {

    private:

        NodoHistorial* cabeza;      // primer nodo de la lista
        NodoHistorial* cola;        // último nodo de la lista
        int cantidad;               // cantidad de nodos actuales

    public:

        // Constructor y destructor
        HistorialDoble();
        ~HistorialDoble();

        // Inserción
        // Agrega una canción al inicio (nueva cabeza)
        void insertarAlInicio(const string& cancion);

        // Agrega una canción al final (nueva cola)
        void insertarAlFinal(const string& cancion);

        // Inserta en la posición indicada (0-indexed)
        // Si pos <= 0, inserta al inicio. Si pos >= cantidad, inserta al final.
        void insertarEnPosicion(const string& cancion,
            int pos);

        // Inserta una nueva canción antes de la referencia.
        // Retorna false si referencia no existe.
        bool insertarAntesDe(const string& referencia,
            const string& nueva);

        // Inserta una nueva canción después de la referencia.
        // Retorna false si referencia no existe.
        bool insertarDespuesDe(const string& referencia,
            const string& nueva);

        // Búsqueda
        // Retorna true si el nombre de canción existe
        bool existeCancion(const string& cancion) const;

        // Retorna la posición (0-indexed)  de la primera ocurrencia.
        // Retorna -1 si no existe.
        int obtenerPosicion(const string& cancion) const;

        // Retorna el nombre de la canción
        // en la posición indicada.
        // Retorna "" si la posición está fuera de rango.
        string obtenerEnPosicion(int pos) const;

        // Busca desde el final.
        // Retorna la posición contando desde la cola.
        int obtenerPosicionDesdeElFinal(
            const string& cancion) const;

      
        // Eliminación
        // Elimina la primera ocurrencia de una canción por nombre.
        bool eliminarPrimera(const string& cancion);

        // Elimina la última ocurrencia de una canción por nombre.
        bool eliminarUltima(const string& cancion);

        // Elimina el nodo en la posición indicada.
        bool eliminarEnPosicion(int pos);

        // Elimina el primer nodo (cabeza)
        bool eliminarCabeza();

        // Elimina el último nodo (cola)
        bool eliminarCola();

        // Recorrido e impresión
        // Imprime desde cabeza -> cola
        void imprimirCronologico() const;

        // Imprime desde cola -> cabeza
        void imprimirInverso() const;

        // Consultas
     
        int getCantidad() const;

        bool estaVacia() const;
    };

} // namespace EIF201

#endif // HISTORIAL_DOBLE_H