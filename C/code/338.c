//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
void main(){
    int i,arr[]={123,2,3,4,5,6,7,8,9,10};
    int* p;
    p=&arr[3];
//    两个指针相减 会得到一个偏移量（步长）
    int step=p-arr;
    printf("%d\n",step);
}