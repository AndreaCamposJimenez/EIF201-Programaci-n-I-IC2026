#include <iostream>
#include "InversionArreglo.h"

using namespace std;

int main()
{
    int original[20];
    int invertido[20];
    int size;

    
    do {
        cout << "Ingrese el tamano del arreglo (maximo 20): ";
        cin >> size;

        if (size <= 0 || size > 20) {
            cout << "Tamaño invalido. Intente nuevamente.\n";
        }

    } while (size <= 0 || size > 20);

    
    llenarDatos(original, size);

    
    inversoArreglo(original, invertido, size);

    
    cout << "\nArreglo original: ";
    mostrarArreglo(original, size);

    cout << "Arreglo invertido: ";
    mostrarArreglo(invertido, size);

    return 0;
}