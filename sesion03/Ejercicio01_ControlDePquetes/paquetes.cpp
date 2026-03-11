#include "paquetes.h"
#include <iostream>
using namespace std;

double* crearRegistro(int& cantidad)
{
	cout << "Digite la cantidad de paquetes: " << endl;
	cin >> cantidad;
	while (cantidad <= 0) {
		cout << "Digite la cantidad de paquetes: " << endl;
		cin >> cantidad;
	}
	double* pesos = new double[cantidad];
	return pesos;
}

void ingresarPesos(double* pesos, int cantidad)
{
	for (int i = 0; i < cantidad; i++) {
		cout << "Ingrese el peso #" << i + 1 << endl;
		cin >> pesos[i];

		while (pesos[i] <= 0) {
			cout << "Peso invalido. Ingrese nuevamente: ";
			cin >> pesos[i];
		}
	}
	

}

double calcularPesoTotal(const double* pesos, int cantidad)
{
	double suma = 0;
	for (int i = 0; i < cantidad; i++) {
		suma += pesos[i];

	}

	return suma;


}

int contarSobreLimite(const double* pesos, int cantidad, double limite)
{
	int count = 0;
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > limite) {
			count++;
		}

	}
	return count;
}



const double* buscarMasPesado(const double* pesos, int cantidad)
{
	const double* mayor = &pesos[0];

	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > *mayor) {
			mayor = &pesos[i];
		}

	}

	return  mayor;


}