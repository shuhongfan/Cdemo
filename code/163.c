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
    printf("  ������Ĺ���������������֮��\n");
    pstar();
}

pstar(){
    printf("*****************\n");
}