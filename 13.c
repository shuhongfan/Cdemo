#include <stdio.h>
#include <math.h>
int main(){
    double r=0.07,p;
    int n=10;
    p=pow((1+r),n);
    printf("p=%lf\n",p);
}