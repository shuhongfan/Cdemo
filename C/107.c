#include "stdio.h"

int main(){
    char ch1[80],ch2[40];
    int i,j;
    printf("scanf ch1!!!\n");
    gets(ch1);
    printf("scanf ch2!!!\n");
    gets(ch2);
    for(i=0;i<ch1[i]!='\0';i++);
    for(j=0;j<ch2[j]!='\0';j++) ch1[i++]=ch2[j];
    ch1[i]='\0';
    puts(ch1);
}