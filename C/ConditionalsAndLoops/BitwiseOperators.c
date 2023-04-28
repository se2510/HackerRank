/*
In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, 
and C language, use 1 to represent true and 0  to represent false. The logical operators compare bits in two numbers and return 
true or false, 0 or 1, for each bit compared.

    Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of 
    an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

    Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

    Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are 
    opposite. It is denoted by +

    For example, for integers 3 and 5,

    3 = 00000011 (In Binary)
    5 = 00000101 (In Binary)

    AND operation        OR operation        XOR operation
    00000011             00000011            00000011
  & 00000101           | 00000101          ^ 00000101
    ________             ________            ________
    00000001  = 1        00000111  = 7       00000110  = 6


*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
