//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>
typedef int qq;

int main(){
    qq a=10;
    printf("%d\n",a);
    char s1[50]="I am hansome",s2[50],*s3=&s1,*s4=&s2;
    while(*s4++=*s3++);
    puts(s1);
    puts(s2);
}