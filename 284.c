//
// Created by shuhongfan on 2021/6/4.
//

#include <stdio.h>

int main(){
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("file1.dat","r");
    fp2=fopen("file2.txt","w");
    ch=getc(fp1);
    while(!feof(fp1)){
        putchar(ch);
        ch=getc(fp1);
    }
    putchar(10);
    rewind(fp1);
    while(!fenof(fp1)){
        fputc(ch,fp2);
        ch=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}