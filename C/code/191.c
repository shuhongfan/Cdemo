#include <stdio.h>

int main(){
    FILE *fp;
    char a='Y',b='Z';
    fp=fopen("AAA.TXT","a");
    fputc(a,fp);
    fputc(b,fp);
    fclose(fp);
}