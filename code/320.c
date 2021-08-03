//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int i,upper=0,lower=0,kongge=0,num=0,other=0;
    char str;
    while (str!='\n'){
        scanf("%c",&str);
        if(str>='A'&&str<='Z') upper++;
        else if(str>='a'&&str<='z') lower++;
        else if(str>='0'&&str<='9') num++;
        else if(str==' ') kongge++;
        else other++;
    }
    printf("大写字母：%d，小写字母：%d，空格：%d，数字：%d，其他：%d",upper,lower,kongge,num,other);
}