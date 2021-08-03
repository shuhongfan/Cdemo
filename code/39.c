#include <stdio.h>

int main () {
    float a,b,c,max;
    scanf("%f,%f,%f",&a,&b,&c);
    max=a>b?(a>c?a:c):(b>c?b:c);
    printf("max=%f\n",max);
}