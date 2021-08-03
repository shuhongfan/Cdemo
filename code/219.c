#include <stdio.h>

int main(){
    char *p="A String";
    while(*p){
        putchar(*p++);
    }
}