//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
    char ch[10];
//    fgets可以接受空格
    fgets(ch,sizeof(ch),stdin);
    printf("%s",ch);
}