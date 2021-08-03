//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int i,j,sum=0,tsum;
    for(i=1;i<=20;i++){
        tsum=1;
        for(j=1;j<=i;j++){
            tsum=tsum*j;
        }
        sum=sum+tsum;
    }
    printf("sum=%d",sum);
}