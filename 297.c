//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
#include <string.h>
int main(){
    char b1[8]="abcdefg",b2[8],*pb=b1+3;
    while(--pb>=b1) {
        strcpy(b2,pb);
        for(int i=0;i<8;i++) printf("%c",b2[i]);
    }
    printf("%d\n", strlen(b2));
}