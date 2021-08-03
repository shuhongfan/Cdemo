//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main11(){
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[]={7,8,9};

//    指针数组是一个特殊的二维数组模型
//    指针数组对应于二级指针
    int* arr[]={a,b,c};
//    指针数组和二级指针建立关系
    int** p=arr;
    printf("%d\n",**p);
//    二级指针加偏移量 相当于跳过了一个一维数组
    printf("%d\n",*(*p+1));
//    一级指针加偏移量 相当于跳过一个元素
    printf("%d\n",*(*p+1));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
//            printf("%d ",p[i][j]);
//            printf("%d ",*(p[i]+j));
            printf("%d ",*(*(p+i)+j));
        }
        puts("");
    }
}

int main(){
    int a=10;
    int b=20;
    int* p=&a;
    int** pp=&p;
    int*** ppp=&pp;
//    *ppp==*pp
//    **pp=100;
    printf("%d\n",*p);
}