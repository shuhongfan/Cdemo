//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
#include "string.h"
void main(){
    char str1[10]="abcdefghij",str2[]="china";
    strupr(strncpy(str1,str2,2));
    puts(str1);
}