#include <iostream>
using namespace std;
const int FILAS = 2;
const int COLUMNAS = 2;
// Funcion para sumar dos matrices y almacenar el resultado en otra matriz
void sumarMatrices(int matriz1[][COLUMNAS], int matriz2[][COLUMNAS], int resultado[][COLUMNAS]) {
for (int i = 0; i < FILAS; ++i) {
for (int j = 0; j < COLUMNAS; ++j) {
resultado[i][j] = matriz1[i][j] + matriz2[i][j];
}
}
}
// Funcion para imprimir una matriz
void imprimirMatriz(int matriz[][COLUMNAS]) {
for (int i = 0; i < FILAS; ++i) {
for (int j = 0; j < COLUMNAS; ++j) {
cout << matriz[i][j] << " ";
}
cout << endl;
}
}
int main() {
int matriz1[FILAS][COLUMNAS] = {{1, 2}, {3, 4}};
int matriz2[FILAS][COLUMNAS] = {{5, 6}, {7, 8}};
int resultado[FILAS][COLUMNAS];
// Llamada a la funcion para sumar las matrices
sumarMatrices(matriz1, matriz2, resultado);
// Imprimir la matriz resultante
cout << "La matriz resultante es:" << endl;
imprimirMatriz(resultado);
return 0;
}
