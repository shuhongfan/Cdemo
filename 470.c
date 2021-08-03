//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
#include <string.h>
int inverse(char str[]){
    int i,j;
    char t;
    j=strlen(str);
    for(i=0;i<j/2;i++){
        t=str[i];
        str[i]=str[j-1-i];
        str[j-1-i]=t;
    }
}
int main(){
    char str[100];
    gets(str);
    inverse(str);
    puts(str);
}