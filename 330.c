//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>
#include <string.h>

int main(){
    char str[3][20];
    char string[20];
    int i;
    for(i=0;i<3;i++) gets(str);
    if(strcmp(str[0],str[1])>0){
        strcpy(string,str[0]);
    } else {
        strcpy(string,str[1]);
    }
    if(strcmp(str[2],string)>0){
        strcpy(string,str[2]);
    }
    printf("the largest string is %s",string);
    return 0;
}