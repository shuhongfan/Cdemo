//
// Created by shuhongfan on 2020/10/30.
//

#include <stdio.h>

char* my_strchr1(char* str,char ch){
    int i=0;
    while (str[i]){
        if (str[i]==ch){
            return &str[i];
        }
        i++;
    }
    return NULL;
}
char* my_strchr(char* str,char ch){
    while (*str){
        if (*str==ch)
            return str;
        str++;
    }
    return NULL;
}
int main(){
    char str[]="hello world";
    char* p=my_strchr(str,'h');
    if (p==NULL){
        printf("Œ¥’“µΩ");
    } else{
        printf("%s\n",p);
    }
}