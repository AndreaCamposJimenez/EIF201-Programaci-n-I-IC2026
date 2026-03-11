#include <iostream>
#include "paquetes.h"

using namespace std;

int main() {

    int cantidad;
    double limite;

   
    double* pesos = crearRegistro(cantidad);

    ingresarPesos(pesos, cantidad);

   
    double total = calcularPesoTotal(pesos, cantidad);
    cout << "\nPeso total: " << total << " kg" << endl;

  
    double promedio = total / cantidad;
    cout << "Promedio: " << promedio << " kg" << endl;

   
    cout << "\nDigite el limite de peso: ";
    cin >> limite;

   
    int sobre = contarSobreLimite(pesos, cantidad, limite);
    cout << "Paquetes que superan el limite: " << sobre << endl;

   
   const double* mayor = buscarMasPesado(pesos, cantidad);
    cout << "Paquete mas pesado: " << *mayor << " kg" << endl;

  
    delete[] pesos;

    return 0;
}