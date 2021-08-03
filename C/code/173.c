#include <stdio.h>
int x;
int main(){
    x=1;
    f();
    x++;
    printf("x=%d",x);
}

f(){
    x++;
}