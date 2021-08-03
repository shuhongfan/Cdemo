//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
#include "string.h"
int main(){
    char s1[]="123456789",s2[]="1234";
    strcpy(s1,s2);
    for(int i=0;i<10;i++)
    printf("%c\n", s1[i]);
}