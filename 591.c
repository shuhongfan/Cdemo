//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int num,count=0;
    scanf("%d",&num);
    while(num){
        count++;
        printf("%d ",num%10);
        num=num/10;
    }
    printf("%d",count);
}