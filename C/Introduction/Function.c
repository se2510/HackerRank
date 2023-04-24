#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max;
    if(a>b){
        if(a>c){
            if(a>d){
                max = a;
                return a;
            }else{
                max = d;
                return d;
            }
        }else{
            if(c>d){
                max = c;
                return c;
            }
        }
    }else{
        if(b>c){
            if(b>d){
                max = b;
                return b;
            }else{
                max = d;
                return d;
            }
        }else{
            if(c>d){
                max = c;
                return c;
            }else{
                max=d;
                return d;
            }
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
