//
// Created by shuhongfan on 2020/11/3.
//

#include <stdio.h>

int main11(){
    char ch[]="hello world"; // 栈区字符串
//    char* p=ch;
//    printf("%s\n",p);
//    printf("%c\n",*(p+1));

    char* p="hello world"; // 数据区常量区字符串
    char* p1="hello world";
    ch[2]='m';
//    p[3]='m';
//    *(p+3)='m';
    printf("%s\n",ch);
    printf("%s\n",p);
}

int main(){
//    指针数组
    char ch1[]="hello";
    char ch2[]="world";
    char ch3[]="dabaobei";
    char* arr[]={ch1,ch2,ch3};

//    字符串数组
    char* arr1[]={"hello","world","dabaobei"};
//    按字符排序
    for (int i = 0; i < 3-1; ++i) {
        for (int j = 0; j < 3-1-i; ++j) {
            if (arr[j][0]>arr[j+1][0]){
                char* temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for (int i = 0; i < 3; ++i) {
        printf("%s\n",arr[i]);
    }
}