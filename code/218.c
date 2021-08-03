#include <stdio.h>

int main(){
    char str[]="A String";
    char *p;
    p=str;
    while(*p){
        putchar(*p++);
        // printf("%s\n",p);
    }

    p=str;
    for(;*p!='\0';p++){
        printf("%c\n",*p);
    }
}