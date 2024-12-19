# Sumar Dos Matrices en C++

Este programa en C++ permite realizar la suma de dos matrices bidimensionales y mostrar el resultado. Es una implementación práctica que muestra cómo trabajar con matrices en C++, realizar operaciones matemáticas entre ellas y presentar los resultados de manera clara.

## Propósito del Código

El propósito de este programa es sumar dos matrices bidimensionales de tamaño fijo y almacenar el resultado en una tercera matriz. Luego, el programa imprime la matriz resultante en la consola.

## ¿Qué incluye el código?

1. **Declaración y Inicialización de Matrices**
   - Se definen dos matrices (`matriz1` y `matriz2`) con valores predefinidos:
     ```cpp
     int matriz1[FILAS][COLUMNAS] = {{1, 2}, {3, 4}};
     int matriz2[FILAS][COLUMNAS] = {{5, 6}, {7, 8}};
     ```
   - Se declara una matriz `resultado` para almacenar los valores resultantes de la suma:
     ```cpp
     int resultado[FILAS][COLUMNAS];
     ```

2. **Función para Sumar Matrices**
   - La función `sumarMatrices` realiza la suma elemento por elemento de las dos matrices de entrada y almacena el resultado en la matriz `resultado`:
     ```cpp
     void sumarMatrices(int matriz1[][COLUMNAS], int matriz2[][COLUMNAS], int resultado[][COLUMNAS]) {
         for (int i = 0; i < FILAS; ++i) {
             for (int j = 0; j < COLUMNAS; ++j) {
                 resultado[i][j] = matriz1[i][j] + matriz2[i][j];
             }
         }
     }
     ```

3. **Función para Imprimir Matrices**
   - La función `imprimirMatriz` recorre cada elemento de la matriz dada y los imprime en formato de filas y columnas:
     ```cpp
     void imprimirMatriz(int matriz[][COLUMNAS]) {
         for (int i = 0; i < FILAS; ++i) {
             for (int j = 0; j < COLUMNAS; ++j) {
                 cout << matriz[i][j] << " ";
             }
             cout << endl;
         }
     }
     ```

4. **Llamadas a las Funciones**
   - El programa llama a `sumarMatrices` para calcular la suma de las matrices, y luego a `imprimirMatriz` para mostrar el resultado:
     ```cpp
     sumarMatrices(matriz1, matriz2, resultado);
     imprimirMatriz(resultado);
     ```

5. **Salida del Resultado**
   - Para las matrices predefinidas, la salida es:
     ```plaintext
     La matriz resultante es:
     6 8 
     10 12
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el archivo fuente:
     ```bash
     g++ sumarMatrices.cpp -o sumarMatrices
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./sumarMatrices
     ```

3. **Resultados**
   - El programa imprimirá la matriz resultante de la suma de las dos matrices de entrada.

## Características Técnicas

- **Matrices Bidimensionales:** Trabaja con matrices de tamaño fijo (`FILAS` x `COLUMNAS`).
- **Suma Elemento a Elemento:** Realiza la suma de las matrices en forma iterativa.
- **Funciones Modularizadas:** Separa la lógica de suma y la impresión en funciones reutilizables.
- **Interfaz Clara:** Presenta los resultados de forma ordenada en la consola.

## Personalización

Puedes modificar los valores de las matrices iniciales para adaptarlas a otros casos de prueba. Por ejemplo:
```cpp
int matriz1[FILAS][COLUMNAS] = {{10, 20}, {30, 40}};
int matriz2[FILAS][COLUMNAS] = {{50, 60}, {70, 80}};
