#include "MatrizOperacion.h"
#include <iostream>
#include <iomanip>
using namespace std;

void leerMatriz(int matriz[FILAS][COLUMNAS])
{
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			cout << "Ingrese valor [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
}
void imprimirMatriz(int matriz[FILAS][COLUMNAS])
{
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			cout << setw(5) << matriz[i][j];
		}
		cout << endl;
	}
}
void sumarFilas(int matriz[FILAS][COLUMNAS])
{
	for (int i = 0; i < FILAS; i++) {

		int suma = 0;

		for (int j = 0; j < COLUMNAS; j++) {
			suma += matriz[i][j];
		}

		cout << "Suma de la fila " << i + 1 << ": " << suma << endl;
	}
}

void sumarColumnas(int matriz[FILAS][COLUMNAS])
{
	for (int j = 0; j < COLUMNAS; j++) {

		int suma = 0;

		for (int i = 0; i < FILAS; i++) {
			suma += matriz[i][j];
		}

		cout << "Suma de la columna " << j + 1 << ": " << suma << endl;
	}
}

int sumarDiagonal(int matriz[FILAS][COLUMNAS])
{
	int sumaDiagonal = 0;

	for (int i = 0; i < FILAS; i++) {
		sumaDiagonal += matriz[i][i];
	}

	return sumaDiagonal;
}
