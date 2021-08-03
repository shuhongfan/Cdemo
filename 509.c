//
// Created by shuhongfan on 2021/6/15.
//

#include "string.h"
#include <stdio.h>
typedef struct student{
    char name[10];long sno;float score;
}STU;
int main()
{
    STU a={"zhangsan",2001,95},b={"shangxian",2002,90},c={"anhua",2003,95},d,
    *p=&d;
    d=a;
    if (strcmp(a.name,b.name)>0)d=b;
    if (strcmp(c.name,d.name)>0)d=c;
    printf("%1d%s\n",d.sno,p->name);
}