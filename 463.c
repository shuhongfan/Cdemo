//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    char a[5]={'*','*','*','*','*'},spa=' ';
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++) printf("%c",spa);
//        for(j=0;j<5;j++) printf("%c",a[j]);
        puts(a);
        printf("\n");
    }
}