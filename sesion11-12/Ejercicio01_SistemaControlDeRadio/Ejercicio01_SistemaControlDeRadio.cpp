#include "HistorialDoble.h"
#include "RotacionCircular.h"
using namespace EIF201;

int main() {

    // MODULO A - HistorialDoble

    cout << "MODULO A: HistorialDoble" << endl;
    {
        HistorialDoble h;

        // Insercion
        h.insertarAlFinal("rock1");
        h.insertarAlFinal("pop7");
        h.insertarAlInicio("jazz3");
        h.insertarAlInicio("clas5");
        h.insertarEnPosicion("folk2", 2);
        h.insertarAntesDe("jazz3", "bosa1");
        h.insertarDespuesDe("pop7", "soul4");
        h.imprimirCronologico();
        
        h.imprimirInverso();
        
        // Busqueda
        cout << "Posicion jazz3:      " << h.obtenerPosicion("jazz3") << endl; // 6
        cout << "Cancion en pos 0:    " << h.obtenerEnPosicion(0) << endl; // clas5
        cout << "Jazz3 existe:        " << (h.existeCancion("jazz3") ? "si" : "no") << endl;
        cout << "Pos desde final pop7:" << h.obtenerPosicionDesdeElFinal("pop7") << endl;

        // Eliminacion
        h.eliminarPrimera("bosal1");
        h.eliminarCabeza();
        h.eliminarCola();
        h.eliminarEnPosicion(1);
        h.eliminarUltima("pop7");
        h.imprimirCronologico();

        // Esperado: rock1 <-> soul4
        cout << "Cantidad: " << h.getCantidad() << endl; // 2
        cout << "Vacia: " << h.estaVacia() << endl;
    }

    // MODULO B - RotacionCircular

    cout << "\nMODULO B: RotacionCircular" << endl;
    {
        RotacionCircular r;

        // Insercion
        r.insertarAlFinal("Maria");
        r.insertarAlFinal("Carlos");
        r.insertarAlFinal("Adriana");
        r.insertarAlInicio("Diego");
        r.insertarDespuesDe("Carlos", "Elena");
        r.imprimirRotacion();

        // Esperado: Diego -> Maria -> Carlos -> Elena -> Adriana -> (inicio)

        // Busqueda
        cout << "Carlos existe: " << (r.existeLocutor("Carlos") ? "si" : "no") << endl;
    
        cout << "Posicion Carlos: " << r.obtenerPosicion("Carlos") << endl; // 2
        cout << "Turno actual: " << r.turnoActual() << endl; // Diego

        // Rotacion
        r.simularTurnos(7);
        // Esperado: Maria, Carlos, Elena, Adriana, Diego, Maria, Carlos

        // Eliminacion
        r.eliminarLocutor("Carlos");
        r.eliminarTurnoActual();
        r.imprimirRotacion();
        // Rotacion actualizada sin Carlos ni el locutor activo al momento
        cout << "Cantidad: " << r.getCantidad() << endl;

        // Caso extremo: lista con un solo locutor
        r.eliminarLocutor("Adriana");
        while (!r.estaVacia()) {
            r.eliminarTurnoActual();
        }

        cout << "Vacia: " << (r.estaVacia() ? "si" : "no") << endl; // si
        cout << "Siguiente vacia: " << r.siguiente() << endl; // ""
    }

    return 0;
}