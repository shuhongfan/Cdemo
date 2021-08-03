#include <stdio.h>

int main(){
    FILE *fp;
    char c='X';
    fp=fopen("a:190.txt","W");
    fputc(c,fp);
    fclose(fp);
}