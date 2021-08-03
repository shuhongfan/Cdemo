#include <stdio.h>

int main(){
    int a,b,L,x,y;
    a=3;b=4;

    if(a>b) L=a;
    else    L=b;
    printf("L=%d\n",L);

    if(a>b) 
    {
        x=a;y=b;
    } else
    {
        x=b;y=a;
    }
    printf("x=%d y=%d",x,y);
}