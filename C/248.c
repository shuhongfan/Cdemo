#include <stdio.h>

int main(){
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("a.txt","r");
    fp2=fopen("b.txt","w");
    ch=getc(fp1);
    while(!feof(fp1)){
        putchar(ch);
        ch=getc(fp1);
    }
    putchar(10);
    rewind(fp1);
    ch=getc(fp1);
    while(!feof(fp1)){
        fputc(ch,fp2);
        ch=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
