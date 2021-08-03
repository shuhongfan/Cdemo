#include <stdio.h>

int main(){
    FILE *fp;
    if((fp=fopen("AAA.TXT","r"))==NULL){
        printf("can not open this file\n");
    }
    char c;
    while(c!=EOF){
        c=fgetc(fp);
        putchar(c);
    }
    fclose(fp);
}