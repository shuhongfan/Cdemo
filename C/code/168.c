#include <stdio.h>
int a;
int main(){
    a=10;
    f();
    printf("a=%d\n",a);
}

f(){
    int a=20;
    printf("a=%d\n",a);
}