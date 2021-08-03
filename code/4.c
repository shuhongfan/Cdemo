#include <stdio.h>

int f(n)
int n;
{
    int t;
    t=n*n;
    return t;
}

int main() {
    int a,p;
    scanf("%d",&a);
    p=f(a);
    printf("%d",p);
}

