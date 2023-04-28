// The syntax for the for loop is:

// for ( <expression_1> ; <expression_2> ; <expression_3> )
//    <statement>

//    expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
//    expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
//    expression_3 is generally used to update the flags/variables.



// esta mal juas juas

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int n=a; n<=b;n++){
        if (n==1){
        printf("one\n");
        }else if (n==2) {
        printf("two\n");
        }else if (n==3) {
        printf("three\n");
        }else if (n==4) {
        printf("four\n");
        }else if (n==5) {
        printf("five\n");
        }else if (n==6) {
        printf("six\n");
        }else if (n==7) {
        printf("seven\n");
        }else if (n==8) {
        printf("eight\n");
        }else if (n==9) {
        printf("nine\n");
        }else if (n<1) {
        printf("Out of range");
        }else if ((n>9) && (n%2 == 0)) {
        printf("even\n");
        }else if ((n>9) && (n%2 == 1)) {
        printf("odd\n");
        }
    }
    return 0;
}
