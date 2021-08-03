#include <stdio.h>

int main(){
    int a,b;
    void head();
    head();
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    printf("a+b=%d",a+b);
}

void head(){
    pstar();
    printf("  本程序的功能是求两个整数之和\n");
    pstar();
}

pstar(){
    printf("*****************\n");
}