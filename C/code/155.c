#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char password[]="hello";
    char str[20];
    printf("����������:\n");
    gets(str);
    if(strcmp(password,str)==0) printf("������ȷ");
    else {
        printf("�������");
        exit(0);
    }
    printf("�����....");
}