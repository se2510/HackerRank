/* The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and 12 % 10 = 2. 
The ordinary division operator, /, returns a truncated integer value when performed on integers. 
For example, 5 / 3 = 1. To get the last digit of a number in base 10, use 10 as the modulo divisor.

Task
Given a five digit integer, print the sum of its digits. 

Input Format
The input contains a single five digit number, n

Constrains
10000<=n<=99999

Output Format
Print the sum of the digits of the five digit number.

Sample Input 0
10564

Sample Output 0
16                      */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum=0, ult=0, temp=n;
    if (10000 <= n <= 99999){
        for (int i=0;i<5;i++){
            ult= temp%10;
            sum= sum+ult;
            temp= temp/10;
        }
        printf("%d",sum);
    }
    return 0;
}