#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Se utiliza un bucle for anidado para iterar sobre las filas y columnas de la matriz resultante.
En cada posición de la matriz, se calcula el valor mínimo entre la distancia a los bordes 
superior, inferior, izquierdo y derecho de la matriz. Este mínimo representa la cantidad de pasos 
necesarios para llegar al número más cercano al centro del patrón. Restando este valor mínimo a n, 
se obtiene el número correspondiente a imprimir en esa posición.
Finalmente, se imprime cada número con un ancho de campo de al menos 2 caracteres para lograr el formato deseado.
*/

int main() {
    int n;
    scanf("%d", &n);

    int rows = n * 2 - 1;

    for (int i = 0; i < rows; i++) { // for rows
        for (int j = 0; j < rows; j++) { // for columns
            int min = i < j ? i : j; // Operador ternario para asignar el valor i o j
            min = min < rows - i - 1 ? min : rows - i - 1;
            min = min < rows - j - 1 ? min : rows - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}