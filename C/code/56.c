#include <stdio.h>

int main(){
    int x,y,a,b;
    x=20;y=10;
    b=x>y?10*x:10*y;
    a=10*b;
    printf("a=%d\n",a);
}