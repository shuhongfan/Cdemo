//
// Created by shuhongfan on 2021/6/3.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char ch='s';
    if((fp=fopen("C:\\Users\\shuhongfan\\Desktop\\Cdemo\\a.txt","wr+"))==NULL){
        printf("error");
        exit(0);
    }

    fputc(ch,fp);
    while((ch= fgetc(fp))!=EOF) putchar(ch);
    fclose(fp);
}