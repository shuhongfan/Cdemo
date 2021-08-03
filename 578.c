//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    char a[5]={'*','*','*','*','*'},space=' ';
    int i,j,k;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++) printf("%c",space);
        for(k=0;k<5;k++) printf("%c",a[k]);
        printf("\n");
    }
}