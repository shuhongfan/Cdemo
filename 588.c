//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char str[100];
    int i=0;
    if((fp=fopen("al.txt","w"))==NULL){
        printf("can not open file");
        exit(0);
    }
    gets(str);
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
        fputc(str[i],fp);
        i++;
    }
    fclose(fp);
    fp=fopen("a1.txt","r");
    printf("%s\n",str);
    fclose(fp);
    return 0;
}