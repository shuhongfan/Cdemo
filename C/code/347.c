//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
#include "string.h"
struct person{
    char name[21];
    int age;
    char sex;
};
struct stu{
    struct person p;
    int id;
    int score;
};
void main(){
    struct stu ss;
    strcpy(ss.p.name,"faih");
    ss.p.age=20;
    printf("%s\n",ss.p.name);
    printf("%d\n",ss.p.age);
}