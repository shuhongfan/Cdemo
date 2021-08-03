//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>
#include <math.h>
int main(){
    int sign=1,count=0;
    double pi=0,n=1,tern=1;
    while(fabs(tern)>=1e-6){
        pi=pi+tern;
        n=n+2;
        sign=-sign;
        tern=sign/n;
        count++;
    }
    pi=pi*4;
    printf("%10.8lf\n",pi);
    printf("count=%d\n",count);
    return 0;
}