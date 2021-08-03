#include <stdio.h>

int x,y;
int main(){
    int n;
    x=1;y=2;
    n=x+y;
    printf("x=%d,y=%d,n=%d\n",x,y,n);
    n=s();
    printf("x=%d,y=%d,n=%d\n",x,y,n);
}

s(){
    int z;
    x=3;y=4;
    z=x+y;
    return z;
}