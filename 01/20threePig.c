//
// Created by shuhongfan on 2020/10/26.
//


#include <stdio.h>

int main() {
    int a,b,c;
    printf("��������ֻС������:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c){
            printf("С��a����");
        } else{
            printf("С��C����");
        }
    } else{
        if (b>c){
            printf("С��b����");
        } else{
            printf("С��C����");
        }
    }
}
