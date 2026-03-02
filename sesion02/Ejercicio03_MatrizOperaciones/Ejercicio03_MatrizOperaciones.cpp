#include <iostream>
#include "MatrizOperacion.h"

using namespace std;

int main()
{
    int matriz[FILAS][COLUMNAS];

    
    cout << "Ingrese los valores de la matriz 3x3:\n";
    leerMatriz(matriz);

    
    cout << "\nMatriz ingresada:\n";
    imprimirMatriz(matriz);

   
    cout << "\n--- Suma de filas ---\n";
    sumarFilas(matriz);


    cout << "\n--- Suma de columnas ---\n";
    sumarColumnas(matriz);

 
    cout << "\nSuma de la diagonal principal: "
        << sumarDiagonal(matriz) << endl;

    return 0;
}