#ifndef MATRIZOPERACIONES_H
#define MATRIZOPERACIONES_H

const int FILAS = 3;
const int COLUMNAS = 3;

void leerMatriz(int matriz[FILAS][COLUMNAS]);
void imprimirMatriz(int matriz[FILAS][COLUMNAS]);

void sumarFilas(int matriz[FILAS][COLUMNAS]);
void sumarColumnas(int matriz[FILAS][COLUMNAS]);
int sumarDiagonal(int matriz[FILAS][COLUMNAS]);

#endif