//
// Created by shuhongfan on 2021/6/6.
//
#include <stdio.h>
int cp(char *arr,char *arr2){
    while (*arr) {
        if(*arr=='a'||*arr=='e'||*arr=='i'||*arr=='o'||*arr=='u')
            *arr2++=*arr;
        arr++;
    }
    *arr2='\0';
    return 0;
}
int main(){
    char arr[50],arr2[50];
    gets(arr);
//    puts(arr);
    cp(arr,arr2);
    puts(arr2);
}
