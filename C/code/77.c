#include <stdio.h>

int main(){
    int a=12,b=24;
    char c='A',d='a';
    float e=2.58,f=-2.58,g=68.5;
    scanf("%6d,%6d,%c%c%f%f%*f%f",&a,&b,&c,&d,&e,&f,&g);
    printf("%6d,%6d,%c%c%f%f%*f%f",a,b,c,d,e,f,g);
}