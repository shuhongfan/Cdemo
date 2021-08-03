//
// Created by shuhongfan on 2021/4/25 0025.
//

#include "stdio.h"
void cpy(char str[],char str2[]){
    int i=0;int n=0;
    while (str[i]!=0){
        if(str[i]=='i'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str2[n]=str[i];
            n++;
        }
        i++;
    }
}
void main(){
    char str1[30]="dfsdif4oa5dsf5e4dusfiehgfjt",str2[30];
    puts(str1);
    cpy(str1,str2);
    puts(str2);
}