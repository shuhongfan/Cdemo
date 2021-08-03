#include "stdio.h"
#include "string.h"
void copystr( char *p1,char *p2)
{
    int m=11,n1=4,n2=17;
    p1=p1+m;
    p2=p2+n1;
    while(n1<n2)
    {
        *p1=*p2;
        p1++;
        p2++;
        n1++;
    }
    *p1='\0';
}

void main(){
    char a[40]="My name is LI jilin.",b[40]="Mr.Zhang Haoling is very happy.",*p;
    copystr(a,b);
    printf("%s",a);
}