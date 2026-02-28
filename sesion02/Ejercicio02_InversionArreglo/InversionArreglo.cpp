#include "InversionArreglo.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
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
void inversoArreglo(int original[], int invertido[], int size)
{
	for (int i = 0; i < size; i++) {
		invertido[i] = original[size - 1 - i];
	}
}

void mostrarArreglo(int arr[], int size)
{
 for (int i = 0; i < size; i++) {
	cout << arr[i] << " ";
}
	cout << endl;
}

