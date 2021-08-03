#include <stdio.h>

int main(){
    int a,b;
    long c,d;
    unsigned e,f;
    a=32767;b=1;
    c=2147483647;d=1;
    e=65535;f=1;
    printf("int:%d,%d\n",a,a+b);
    printf("long:%ld,%ld\n",c,c+d);
    printf("unsigned:%u,%u\n",e,e+f);
}