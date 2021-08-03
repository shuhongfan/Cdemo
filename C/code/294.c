//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void main(){
    int a,b;
    b=(a=2*5,a*2),a+6;
    printf("%d\n",b);

    double x,y;
    x=1;
    y=x+7/2;
    printf("%lf\n",y);

    short int i=32769;
    printf("%d\n",i);

    int f[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    char c='a',d,g;
    printf("%d",f['d'-c]);
}