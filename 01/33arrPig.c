//
// Created by shuhongfan on 2020/10/27.
//
#include <stdio.h>

#define SIZE 10

int main(){
    int arr[SIZE];
    int max=0;
    for (int j = 0; j < SIZE; ++j) {
        scanf("%d",&arr[j]);
    }
    for (int i = 0; i < SIZE; ++i) {
        printf("%d--%d\n",i,max);
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("���յ�С������Ϊ��%d\n",max);
}
