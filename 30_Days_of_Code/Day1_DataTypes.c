#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int ent=0;
    double dob=0.0; 
    char cuac[100]="";
    char cuac2[100]="";
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &ent);
    scanf("%lf", &dob);
    //fgets() lee hasta encontrar un salto de linea o hasta que se alcance el tamanio maximo del arreglo
    fgets(cuac, sizeof(cuac), stdin); // Esta cadena se queda el salto de linea del buffer cuando se ingreso la variable anterior (el double)
    fgets(cuac2, sizeof(cuac2), stdin);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+ent);
    // Print the sum of the double variables on a new line.
    printf("%.1f\n",d+dob);
    // Concatenate and print the String variables on a new line
    printf("%s%s",s,cuac2);
    // The 's' variable above should be printed first.

    return 0;
}