#include <iostream>
#include "temperatura.h"
int main()
{
     
    int cantidadDias = 0;

    //1. Crear arreglo dinamico
    double* registroTemp = crearRegistro(cantidadDias);

    //2. Llenar con datos del usuario
    ingresarTemperaturas(registroTemp, cantidadDias);

    //3. Mostar resultados 
    mostrarResultados(registroTemp, cantidadDias);

    //4. Liberar memoria (obligatoria)
    delete[] registroTemp;
    registroTemp = nullptr;

    return 0;
















}

