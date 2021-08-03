#include <stdio.h>

int main(){
    int a,b;
    scanf("%2d%*2s%2d",&a,&b);
    printf("a=%d,b=%d,a+b=%d\n",a,b,a+b);
}