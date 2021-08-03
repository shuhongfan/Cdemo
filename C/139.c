#include "stdio.h"
#include "string.h"
int main(){
    int inverse(char str[]);
    char str[100];
    gets(str);
    inverse(str);
    puts(str);
}

int inverse(char str[]){
    int i,j,t;
    j=strlen(str)-1;
    for(i=0;i<(strlen(str)/2);i++){
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        j--;
    }
}