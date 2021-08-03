#include <stdio.h>

int main(){
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    swap(a,b);
    printf("a=%d,b=%d",a,b);
}

swap(x,y)
int x,y;
{
    int t;
    t=x;
    x=y;
    y=t;
}