//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
#include <string.h>

int main(){
    char *p1,*p2,str[50]="ABCDEFG";
    p1="abcd";
    p2="efgh";
    strcpy(str+1,p2+1);
    strcpy(str+3,p1+3);
    for(int i=0;i<50;i++)
        printf("%c\n",str[i]);
}