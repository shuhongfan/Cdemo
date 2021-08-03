//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main11(){
    int a=10;
    int b=20;
    int c=30;
    int* arr[3]={&a,&b,&c};
    printf("%d\n",arr[0]);
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        printf("%d\n",*arr[i]);
    }
    printf("指针数组大小：%d\n",sizeof(arr));
    printf("指针数组大小：%d\n",sizeof(arr[0]));
}

int main(){
//    指针数组里面存储的是指针元素
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[]={7,8,9};
    int* arr[]={a,b,c};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
//            printf("%d\n",arr[i][j]);
//            printf("%d\n",*(arr[i]+j));
            printf("%d\n",*(*(arr+i)+j));
        }
    }
}