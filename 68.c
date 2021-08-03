#include "stdio.h"
#include "math.h"
int main(){
    float a,x0,x1;
    scanf("%f",&a);
    x0=a;
    x1=(x0+a/x0)/2;
    while (fabs(x0-x1)>=1e-5)
    {
        x0=x1;
        x1=(x0+a/x0)/2;
    }
    printf("%f",x1);
    return 0;
}