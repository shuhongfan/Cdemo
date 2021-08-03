#include <stdio.h>

int main(){
    int x=7,y=5,a,b,c;
    a=(--x==y++)?-x:++y;
    b=x++%3;
    c=13%y--;
    printf("a=%d,b=%d,c=%d,x=%d,y=%d\n",a,b,c,x,y);
}