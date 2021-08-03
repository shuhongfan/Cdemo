#include <stdio.h>

int main(){
    extern a;
    a=10;
    printf("a=%d\n",a);
    f();
    printf("a=%d\n",a);
}

int a;
f(){
    a=20;
}