//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>
#include <math.h>
#define M 1000

int main(){
    int i,k;
    while(1){
        printf("scanf i value=");
        scanf("%d",&i);
        if(i>1000) continue;
        k=sqrt(i);
        printf("%d",k);
        break;
    }
    return 0;
}