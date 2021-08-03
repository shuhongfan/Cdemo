#include "stdio.h"
#include "math.h"
int main(){
    double i,flag=1,pi=0;
    for(i=1;fabs(1/i)>=1e-6;i=i+2){
        pi=pi+flag*(1/i);
        flag=-flag;
    }
    pi=pi*4;
    printf("%10.8lf",pi);
}