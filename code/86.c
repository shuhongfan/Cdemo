#include <stdio.h>

int main(){
    char ch,c1,c2;
    printf("请输入一个字母：");
    ch=getchar();
    c1=ch-1;
    c2=ch+1;
    printf("\n%c的前一个字母是%c,后一个字母是%c",c1,ch,c2);
}