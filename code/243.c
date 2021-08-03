//
// Created by shuhongfan on 2021/4/4.
//

#include <stdio.h>
void main(){
    int j,t,sum=16,foot=40;
    for(j=0;j<=sum;j++){
        t=sum-j;
        if(2*j+4*t==foot){
            printf("%d %d",j,t);
        }
    }
}