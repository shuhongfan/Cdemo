//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
    char arr[5]={'h','e','l','l','o'};
    printf("%d\n",sizeof(arr));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        printf("%c",arr[i]);
    }

    char ch='a';
//    字符串结束标志位\0
//    数字0等同于\0 不等于‘0’
    char arr1[5]={'h','e','l','l','o','\0'};
    printf("%s\n",arr1);


    char ch1[10];
    scanf("%s",ch1);
    printf("%s",ch1);
}