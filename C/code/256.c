//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    int x,y,z,max;
    printf("���������������Զ��Ÿ���:");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>max) max=x;
    if(y>max) max=y;
    if (z>max) max=z;
    printf("%d %d %d ������������Ϊ�� %d",x,y,z,max);
}