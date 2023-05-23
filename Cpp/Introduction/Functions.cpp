#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int aux = 0;
    if (aux < a) {
        aux = a;
    } 
    if (aux < b) {
        aux = b;
    }
    if (aux < c) {
        aux = c;
    }
    if (aux < d){
        aux = d;
    }
    return aux;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}