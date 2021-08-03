//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
#include "string.h"
void main(){
    char arr[5]={8,6,5,4,1},arr2[5];
    int i;
    for(i=0;i<5;i++){
        arr2[i]=arr[5-i-1];
    }
    strcpy(arr,arr2);
    for(i=0;i<5;i++)
        printf("%d",arr[i]);
}