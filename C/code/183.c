#include <stdio.h>

int a,b;
int main(){
    int c,sum();
    a=1;b=2;
    c=sum(a,b);
    printf("c=%d",c);
}
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}