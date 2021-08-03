//
// Created by shuhongfan on 2021/6/4.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch;
    if((fp=fopen("C:\\Users\\shuhongfan\\Desktop\\Cdemo\\a.txt","rw+"))==NULL){
        printf("error");
        exit(0);
    }
    printf("请输入一个准备存储到磁盘的字符串（以#结束）");
    ch=getchar();
    while(ch!='#'){
        fputc(ch,fp);
        putchar(ch);
        ch=getchar();
    }
    fclose(fp);
    return 0;
}