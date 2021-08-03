//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
void main(){
    int a=10,b=20,c=20;
    int* arr[3]={&a,&b,&c};

    *arr[2]=123;
    int i;
    for(i=0;i<3;i++){
        printf("%d\n",arr[i]);
        printf("%d\n",*arr[i]);
    }
}