//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>
#include <math.h>

int main(){
    int num,k;
    scanf("%d",&num);
    while(num<=0||num>=1000){
        printf("try again!\n");
        scanf("%d",&num);
    }
    k=sqrt(num);
    printf("%d",k);
}