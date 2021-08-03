#include <stdio.h>
#include <math.h>
int main(){
    double r0=0.0035,r1=0.015,r2=0.021,r3=0.0275,r5=0.03,p,p1,p2,p3,p4,p5;
    p=1000;
    p1=p*(1+r5*5);
    p2=(p*(1+r2*2))*(1+r3*3);
    p3=(p*(1+r3*3))*(1+r2*2);
    p4=p*pow((1+r1),5);
    p5=p*pow((1+r0/4),4*5);
    printf("p1=%.2f\n",p1);
    printf("p2=%.2f\n",p2);
    printf("p3=%.2f\n",p3);
    printf("p4=%.2f\n",p4);
    printf("p5=%.2f\n",p5);
}