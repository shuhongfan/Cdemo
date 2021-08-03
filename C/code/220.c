#include <stdio.h>
#include <string.h>

int main(){
    char *p="A String";
    int i;
    for(i=0;i<strlen(p);i++){
        printf("%c",p[i]);
    }
}