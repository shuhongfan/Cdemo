//
// Created by shuhongfan on 2021/6/11.
//

#include "stdio.h"
#include <math.h>
int main(){
    int i,count=0;
    float pi=0,k=1,t=1;
    for(i=1;fabs(t)>=1e-6;i+=2){
        t=k/i;
        pi+=t;
        k=-k;
        count++;
    }
    pi*=4;
    printf("%f\n",pi);
    printf("count=%d",count);
}