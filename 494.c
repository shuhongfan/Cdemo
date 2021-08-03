//
// Created by shuhongfan on 2021/6/14.
//

#include <stdio.h>

int main(){
    float n,m;
    scanf("%f",&n);
    if(n<50) m=0.68*n;
    else if(n<100) m=50*0.68+(n-50)*0.75;
    else m=50*0.68+50*0.75+(n-100)*0.8;
    printf("%f",m);
}