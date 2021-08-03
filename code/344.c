//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
typedef struct stu student;
struct stu{
    int id;
    char name[21];
    char sex;
    int age;
    int score;
    char addr[51];
};
void main(){
    student ss[3]={
            {1001,"传值小哥1","M",20,99,"fbhjdsjfdsj"},
            {1002,"传值小哥2","F",18,100,"fbhjdsjfdsj"},
            {1003,"传值小哥3","M",20,99,"fbhjdsjfdsj"}
    };
    int i;
    for(i=0;i<3;i++){
        printf("编号：%d\n",ss[i].id);
        printf("姓名：%s\n",ss[i].name);
        printf("性别：%s\n",ss[i].sex=="M"?"男":"女");
        printf("年龄：%d\n",ss[i].age);
        printf("成绩：%d\n",ss[i].score);
        printf("地址：%s\n",ss[i].addr);
    }
}