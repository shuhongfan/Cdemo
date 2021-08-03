#include <stdio.h>

int main(){
    int a,b;
    long c,d;
    a=327677;b=1;
    c=2147483647;d=1;
    printf("%4d,%4d\n",a,b);
    printf("%d,%d\n",a,b);
    printf("%ld,%ld\n",c,d);
    printf("%-10ld,%10ld,%10ld\n",d,c,d);
}