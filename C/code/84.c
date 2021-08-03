#include <stdio.h>

int main(){
    int a=1,b=2,c=3,g=12345,h=123456;
    float d=7.2,e=-5.5,f=1.56;
    char i='0',j='p';
    printf("a=%-3db=%-3dc=%-3d\n",a,b,c);
    printf("d=%f,e=%f,f=%f\n",d,e,f);
    printf("g=%-8dh=%-8d\n",g,h);
    printf("i=\'%c\' or %d\n",i,i);
    printf("j=\'%c\' or %d\n",j,j);
}