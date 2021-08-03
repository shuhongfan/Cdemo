//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    float fee=0,kw;
    scanf("%f",&kw);
    if(kw<50) fee=kw*0.68;
    else if(kw<100) fee=50*0.68+(kw-50)*0.75;
    else fee=50*0.68+50*0.75+(kw-100)*0.8;
    printf("%f",fee);
}