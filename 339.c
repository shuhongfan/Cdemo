//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int i;
    float stu[10],av=0,sum=0;
    for(i=0;i<10;i++){
        scanf("%f",&stu[i]);
        sum=sum+stu[i];
    }
    av=sum/10.0;
    printf("%f",av);
}