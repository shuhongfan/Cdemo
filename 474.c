//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
#include <string.h>
int insert(char a[]){
    int length;
    length=strlen(a);
    a[length*2+1]='\0';
    while(length>0){
        a[length*2]=a[length];
        a[length*2-1]=' ';
        length--;
    }
}
int main(){
    char a[100];
    gets(a);
    insert(a);
    puts(a);
}