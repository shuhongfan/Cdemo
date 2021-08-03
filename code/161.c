#include <stdio.h>

int main(){
    int n;
    long t;
    long f();
    printf("输入一个整数：\n");
    scanf("%d",&n);
    t=f(n);
    printf("%d!=%ld",n,t);
}
long f(num)
int num;
{
    long x;
    int i;
    x=1;
    for(i=1;i<=num;i++) x*=i;
    return x;
}