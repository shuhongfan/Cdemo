#include "stdio.h"
#include "math.h"

int main(){
    float a,x0,x1;
    scanf("%f",&a);
    x0=a;
    x1=(x0+a/x0)/2;
    while(fabs(x0-x1)>=1e-5){
        x0=x1;
        x1=(x0+a/x0)/2;
    }
    printf("%5.2f  %8.5f  %8.5f",a,sqrt(a),x1);
}