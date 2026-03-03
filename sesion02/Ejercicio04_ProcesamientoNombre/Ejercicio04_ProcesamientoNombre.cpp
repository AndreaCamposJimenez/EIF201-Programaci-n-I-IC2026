#include <iostream>
#include <string>
#include "ProcesamientoNombre.h"

using namespace std;

int main()
{
    string nombreCompleto;

    cout << "Ingrese su nombre completo: ";
    getline(cin, nombreCompleto);

    cout << "Primer nombre: "
        << obtenerPrimerNombre(nombreCompleto) << endl;

    cout << "Primer apellido: "
        << obtenerPrimerApellido(nombreCompleto) << endl;

    cout << "Cantidad de vocales: "
        << contarVocales(nombreCompleto) << endl;

    cout << "Nombre en mayusculas: "
        << convertirMayusculas(nombreCompleto) << endl;

    cout << "Longitud total: "
        << longitudNombre(nombreCompleto) << endl;

    return 0;
}