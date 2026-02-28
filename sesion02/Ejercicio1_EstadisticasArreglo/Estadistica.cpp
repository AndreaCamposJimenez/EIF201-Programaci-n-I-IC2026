#include "Estadistica.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int encontrarMayor(int arr[],int size)
{
	if (size <= 0) {
		return 0;
	}
	int mayor = arr[0];
	for (int i = 1; i < size; i++) {
		if (mayor < arr[i]) {
			mayor = arr[i];
		}
	}
	return mayor;
}

int encontrarMenor(int arr[], int size)
{
	if (size <= 0) {
		return 0;
	}
	int menor = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i]<menor) {
			menor = arr[i];
		}
	}
	return menor;
}

int calcularSuma(int arr[], int size)
{
	if (size <= 0) {
		return 0;
	}
	int suma = 0;
	for (int i = 0; i < size; i++) {
		suma += arr[i];
	}

	return suma;
}

double calcularPromedioAritmetico(int arr[], int size)
{
	if (size <= 0) {
		return 0;
	}

	double promedio = 0.0;
	int suma = 0;
	for (int i = 0; i < size; i++) {
		suma += arr[i];
	}
	promedio = (double)suma/size;
	return promedio;
}

void llenarDatos(int arr[], int size)
{
	string entrada;

	for (int i = 0; i < size; i++) {

		bool valido = false;

		while (!valido) {

			cout << "Ingrese el numero " << i + 1 << ": ";
			cin >> entrada;

			valido = true;

			for (int j = 0; j < entrada.length(); j++) {

				if (j == 0 && entrada[j] == '-') {
					continue;
				}

				if (!isdigit(entrada[j])) {
					cout << "No se permiten letras, solo numeros enteros.\n";
					valido = false;
					break;
				}
			}
			if (entrada == "-") {
				valido = false;
			}
		}

		arr[i] = stoi(entrada);
	}
}