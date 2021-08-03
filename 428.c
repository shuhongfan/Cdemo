//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int num,count=0;
    scanf("%d",&num);
    while(num>99999||num<0){
        printf("error\n");
        scanf("%d",&num);
    }
    while(num){
        count++;
        printf("%d\t",num%10);
        num=num/10;
    }
    printf("count=%d",count);
}