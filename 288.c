//
// Created by shuhongfan on 2021/6/5.
//

#include <stdio.h>

int main(){
    int c;
    while ((c=getchar())!='\n'){
        switch (c-'2') {
            case 0:
            case 1:
                putchar(c+4);
            case 2:
                putchar(c+4);break;
            case 3:
                putchar(c+3);
            default:
                putchar(c+2);break;
        }
    }
}