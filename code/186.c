#include <stdio.h>

int a=10;
int main(){
    a--;
    f();
    printf("a=%d\n",a);
}

f(){
    int a;
    a=15;
}