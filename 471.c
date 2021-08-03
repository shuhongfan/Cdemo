//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
#include <string.h>
int connect(char s1[],char s2[]){
    int i=0,j,lenght;
    lenght=strlen(s1);
    while(s2[i]!=0){
        s1[lenght]=s2[i];
        i++;
        lenght++;
    }
    s1[lenght]='\0';
}
int main(){
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    connect(s1,s2);
    puts(s1);
}