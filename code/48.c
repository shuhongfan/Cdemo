#include <stdio.h>

int main(){
    int x,y,z;
    x=y=1;z=2;
    y=x++-1;
    z=--y+1;
    printf("x=%d,y=%d,z=%d\n",x,y,z);
}