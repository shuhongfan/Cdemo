//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
#include "string.h"
struct stu{
    int id;
    char name[21];
    int sex;
    int age;
    int score;
    char addr[51];
};
void main(){
    struct stu ss={1001,
            "凡凡",
            "M",18,
            99,
            "HuBeuWUhan"};
    ss.id=1003;
    strcpy(ss.name,"牛牛");
//    ss.name="牛牛";
    printf("编号:%d\n",ss.id);
    printf("姓名:%s\n",ss.name);
    printf("性别:%s\n",ss.sex=='m'?"男":"女");
    printf("年龄:%d\n",ss.age);
    printf("成绩:%d\n",ss.score);
    printf("地址:%s\n",ss.addr);
}