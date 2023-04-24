#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Declare variables: two of type int and two of type float. 
	int i=0, e=0;
    float f=0.0, l=0.0;
    // Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
    scanf("%d %d",&i,&e);
    scanf("%f %f",&f,&l);
    
    printf("%d %d\n",i+e, i-e);
    printf("%.1f %.1f", f+l,f-l);
    
    return 0;
}
