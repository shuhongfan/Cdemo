//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
#include "string.h"
struct stu{
    char name[21];
    int age;
    char sex;
};
void main(){
    struct stu ss;
    struct stu s1;
    strcpy(ss.name,"玉兔精");
    ss.age=18;
    ss.sex='F';

    s1=ss;
    s1.age=20;

    printf("%s",ss.name);
    printf("%d",ss.age);
    printf("%c",ss.sex);
}