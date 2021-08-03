#include <stdio.h>

int main(){
    int a,b;
    long power(),t;
    printf("输入两个整数:");
    scanf("%d,%d",&a,&b);
    t=power(a,b);
    printf("%d^%d=%ld",a,b,t);
}

long power(x,n)
int x,n;
{
    long y;
    if(n>0) y=x*power(x,n-1);
    else y=1;
    return y;
}