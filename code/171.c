#include <stdio.h>

int main(){
    int a=2,b;
    b=f(a);
    printf("b=%d",b);
}
f(x)
int x;
{
    int y;
    y=x*x;
    return y;
}