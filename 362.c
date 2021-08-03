//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int sum=0,k=1,i;
    for(i=1;i<=4;i++){
        k=k*i;
        sum=sum+k;
    }
    printf("%d",sum);
}