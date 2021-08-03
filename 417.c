//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>

int main(){
    char *s="meikanshu";
    while (*s){
        printf("%c\t",*s++);
    }
}