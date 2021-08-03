#include <stdio.h>

struct Student{
    int num;
    char name[20];
    char sex;
    int age;
};
struct Student stu[3]={
    {10101,"LI LIN",'M',18},
    {10102,"ZHANG FANG",'M',19},
    {10104,"WANG MIN",'F',20}
};

int main(){
    struct Student *p;
    for(p=stu;p<stu+3;p++){
        printf("%5d %-10s %2c %4d\n",p->num,p->name,p->sex,p->age);
    }
}