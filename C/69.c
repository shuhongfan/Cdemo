#include "stdio.h"
#include <math.h>

int main(){
    double x0,x1,f,f1;
    x1=1.5;
    while(fabs(x1-x0)>=1e-5){
        x0=x1;
        f=((2*x0-4)*x0+3)*x0-6;
        f1=(6*x0-8)*x0+3;
        x1=x0-f/f1;
    }
    printf("%5.2f",x1);
}