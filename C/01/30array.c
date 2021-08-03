//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
//    数组名是一个地址常量
    int arr[10]={9,4,2,1,8,5,3,6,10,7};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);

    arr[3]=arr[5];

    for (int i = 0; i < 10; ++i) {
        printf("%d\n",arr[i]);
    }

//    下标为0的存储方式和大小
    for (int j = 0; j < 10; ++j) {
        printf("%p\n",&arr[j]);
    }

    printf("%p---%p\n",arr,&arr);

    printf("数组在内存中占的大小：%d\n",sizeof(arr));
    printf("数组元素大小:%d\n",sizeof(arr[0]));
    printf("数组元素个数：%d\n",sizeof(arr)/sizeof(arr[0]));
}