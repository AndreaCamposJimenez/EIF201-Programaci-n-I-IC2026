#ifndef PROCESAMIENTONOMBRE_H
#define PROCESAMIENTONOMBRE_H

#include <string>

using namespace std;

string obtenerPrimerNombre(const string& nombreCompleto);
string obtenerPrimerApellido(const string& nombreCompleto);

int contarVocales(const string& nombreCompleto);
string convertirMayusculas(string nombreCompleto);
int longitudNombre(const string& nombreCompleto);

#endif