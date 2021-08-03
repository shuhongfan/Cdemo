//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int i=0,resu;
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    while((s1[i]==s2[i])&&(s1[i]!='\0')) i++;
    if(s1[i]=='\0'&&s2[i]=='\0') resu=0;
    else resu=s1[i]-s2[i];
    printf("result=%d",resu);
}