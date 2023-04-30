/*


*/
// Este si me costó XD

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t=0;
    char cadena[10000];
    scanf("%d",&t);   
    for(int j=0;j<t;j++){
        scanf("%s", cadena);
        int len = strlen(cadena);
        for (int i=0;i<len;i=i+2){ // for the even ones
            if ((i % 2 == 0 && cadena[i] != '\n') || (i == 0 && cadena[i] != '\n')) {
                printf("%c", cadena[i]);
            }
        }
        printf(" ");
        for (int i=1;i<len;i=i+2){ // for the odd ones
            if ((i % 2 == 1 && cadena[i] != '\n')) {
                printf("%c", cadena[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
