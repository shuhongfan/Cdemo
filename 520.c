//
// Created by shuhongfan on 2021/6/16.
//

#include <stdio.h>

int main(){
    int upp=0,low=0,spa=0,dig=0,oth=0;
    char a[100],*aa=a;
    gets(a);
    while(*aa!='\0'){
        if(*aa>='A'&&*aa<='Z') upp++;
        else if(*aa>='a'&&*aa<='z') low++;
        else if(*aa>='0'&&*aa<='9') dig++;
        else if(*aa==' ') spa++;
        else oth++;
        *aa++;
    }
    printf("upp=%d low=%d dig=%d spa=%d oth=%d",upp,low,dig,spa,oth);
}