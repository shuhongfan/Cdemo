//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int i,num;
    scanf("%d",&num);
    while (num>99999||num<=0){
        printf("try again!\n");
        scanf("%d",&num);
    }
    while(num){
        i++;
        printf("%d ",num%10);
        num=num/10;
    }
    printf("count=%d",i);
}