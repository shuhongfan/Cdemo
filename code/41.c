#include <stdio.h>

int main(){
    int x=11;
    printf("(x++*1/3)=%d,x=%d\n",(x++*1/3),x);

    int a,b;
    printf("%d\n",(a=2,b=5,a++,b++,a+b));
}