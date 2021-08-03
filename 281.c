//
// Created by shuhongfan on 2021/6/4.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *in,*out;
    char ch;
    if((in=fopen("C:\\Users\\shuhongfan\\Desktop\\Cdemo\\a.txt","r"))==NULL){
        printf("in error");
        exit(0);
    }
    if((out=fopen("C:\\Users\\shuhongfan\\Desktop\\Cdemo\\b.txt","w"))==NULL){
        printf("out error");
        exit(0);
    }
    ch=getc(in);
    while(!feof(in)){
        fputc(ch,out);
        putchar(ch);
        ch=getc(in);
    }
    putchar(10);
    fclose(in);
    fclose(out);
}