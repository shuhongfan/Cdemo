#include <stdio.h>
int main(){
    char *p="%d,a=%d,b=%d\n";
    int a=111,b=10,c;
    c=a%b;p+=3;
    printf(p,c,a,b);
}