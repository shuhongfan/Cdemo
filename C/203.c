#include <stdio.h>

int main(){
    int length(char *p);
    int len;
    char str[20];
    scanf("%s",str);
    len=length(str);
    printf("len=%d",len);
}
int length(char *p){
    int num=0;
    while(*p!='\0'){
        p++;
        num++;
    }
    return num;
}