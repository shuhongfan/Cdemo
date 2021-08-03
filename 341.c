//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    char str[50],str2[50],n;
    int i=0,j=0;
    gets(str);
    scanf("%c",&n);
    while(str[i]!='\0'){
        if(str[i]!=n){
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    puts(str);
    puts(str2);
}