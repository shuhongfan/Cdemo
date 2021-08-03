//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    char s[100];
    int i,wor=0,spa=0,num=0,oth=0;
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) wor++;
        else if(s[i]==' ') spa++;
        else if(s[i]>='0'&&s[i]<='9') num++;
        else oth++;
    }
    printf("wor=%d,spa=%d,num=%d,oth=%d",wor,spa,num,oth);
}