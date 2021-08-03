//
// Created by shuhongfan on 2021/4/14.
//

#include "stdio.h"
#include "string.h"
void fun(char *s){
//    char a[7];
//    s=a;
//    strcpy(a,"look");
//    puts(a);
    strcpy(s,"look");
}
void  main(){
    char a[5];
    char *p=a;
    fun(p);
    puts(p);
}