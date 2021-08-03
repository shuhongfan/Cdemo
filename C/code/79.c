#include <stdio.h>

int main(){
    int x,y,z;
    long m,n,o;
    unsigned p,q,r;
    x=32766;y=1;z=2;
    m=2147483646;n=1;o=2;
    p=65534;q=1;r=2;
    printf("%d,%d\n",x+y,x+z);
    printf("%ld,%ld\n",m+n,m+o);
    printf("%u,%u",p+q,p+r);
}