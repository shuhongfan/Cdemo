//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>

int main(){
    int num,count=0;
    float av,sum=0;
    while(1){
        scanf("%d",&num);
        if(num==0) break;
        if(num>0&&num%2==1) {
            sum+=num;
            count++;
        }
    }
    av=sum/count;
    printf("av=%f",av);
}