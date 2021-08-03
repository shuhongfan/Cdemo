//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    int x,y,z,max;
    printf("请输入三个数字以逗号隔开:");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>max) max=x;
    if(y>max) max=y;
    if (z>max) max=z;
    printf("%d %d %d 三个数中最大的为： %d",x,y,z,max);
}