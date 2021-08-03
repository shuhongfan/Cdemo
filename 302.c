//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
#include <string.h>
void main()
{
    void copystr( char *,char *);
    char stra[40]="My name is Li jilin.",strb[40]="Mr. zhang Haoling is very happy.";
    copystr(stra,strb);
    printf("%s\n",stra);
}
void copystr( char *p1,char *p2)
{
    int m=11,n1=4,n2=16;
    p1=p1+m;
    p2=p2+n1;
    while(n1<=n2)
    {*p1=*p2;
        p1++;
        p2++;
        n1++;
    }
    *p1='\0';
}