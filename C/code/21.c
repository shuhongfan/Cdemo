#include <stdio.h>

int main () {
    char a='a',c='c';
    int i1,i=238;
    unsigned int u1,u=463;
    long l1,l=2147483147;
    float f1,f=73.98;
    double d1,d=23.76;
    i1=i+a; //238+97 335
    u1=u-i; //463-238 225
    f1=f-c; // 73.98-99 -25.02
    d1=d*f-i; //23.76*73.98-238 1519.7648
    printf("i1=%d,u1=%u,f1=%f,d1=%lf\n",i1,u1,f1,d1);
    i1=i-d; // 238-23.76
    f1=f-d; // 73.98-23.76
    d1=c-d; // 99-23.76
    printf("i1=%d,%f,d1=%1f\n",i1,f1,d1);
}