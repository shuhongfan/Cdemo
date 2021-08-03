//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
void main(){
    int i,arr[]={123,2,3,4,5,6,7,8,9,10};
//    printf("%p\n",&arr[0]);
//    printf("%p\n",arr);

    int* p=arr;
//    printf("%d\n",p[1]);
//    指针+1指向数组的下一个元素
//    printf("%d\n",*(++p));

    for(i=0;i<10;i++){
//        printf("%d\n",p[i]);
        printf("%d ",*(p+i));
    }

}