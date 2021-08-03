//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void main(){
    int score;
    scanf("%d",&score);
    if(score>=90&&score<=100) printf("优");
    else if(score>=80) printf("良");
    else if(score>=70) printf("中");
    else if(score>=60) printf("及格");
    else printf("不及格");
}