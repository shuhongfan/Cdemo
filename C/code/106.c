#include <stdio.h>

int main(){
    int x,y,z;
    x=y=1;
    while (y<10) x+=++y;
    printf("x=%d y=%d\n",x,y);
}