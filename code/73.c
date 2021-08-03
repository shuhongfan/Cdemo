#include <stdio.h>

int main(){
    int a,b,c;
    char s[4];
    scanf("a=%d b=%d %s",&a,&b,s);
    c=a+b;
    printf("%s=%d+%d=%d\n",s,a,b,c);
}