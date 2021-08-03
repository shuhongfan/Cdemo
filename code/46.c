#include <stdio.h>

int main(){
    int a,b,x=2,y,z=y=3;
    a=(z>=y>=x)?1:2;
    b=z<=y&&y>=x+1;
    printf("%d\n",(z>=y)>=x);
    printf("a=%d,b=%d,x=%d,y=%d,z=%d\n",a,b,x,y,z);
}