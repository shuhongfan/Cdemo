#include "stdio.h"
#include "string.h"

int main(){
    char str[3][20];
    char string[20];
    int i;
    for(i=0;i<3;i++) gets(str[i]);
    if(strcmp(str[0],str[1])>0){
        strcpy(string,str[0]);
    } else {
        strcpy(string,str[1]);
    }
    if(strcmp(string,str[2])<0){
        strcmp(string,str[2]);
    }
    printf("%s",string);
}