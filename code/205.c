#include <stdio.h>
#define S(x) x*x
// #define S(x) ((x)*(x))
int main(){
    int a,k=3;
    a=S(k+1);
    printf("a=%d",a);
}