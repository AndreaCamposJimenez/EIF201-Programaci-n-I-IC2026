#include <iostream>
#include "Estadistica.h"
using namespace std;

int main()
{
    const int SIZE = 10;   
    int numeros[SIZE];

    
    llenarDatos(numeros, SIZE);


    int mayor = encontrarMayor(numeros, SIZE);
    int menor = encontrarMenor(numeros, SIZE);
    int suma = calcularSuma(numeros, SIZE);
    double promedio = calcularPromedioAritmetico(numeros, SIZE);

    
    cout << "\n--- RESULTADOS ---\n";
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}