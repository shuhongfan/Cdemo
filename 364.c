//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,sum=0,k=1;
    for(i=1;i<=4;i++){
        k*=i;
        sum+=k;
        printf("i=%d,k=%d,sum=%d\n",i,k,sum);
    }
    printf("%d",sum);
}