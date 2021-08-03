//
// Created by shuhongfan on 2021/6/3.
//

#include <stdio.h>
#include <string.h>
struct person{
    char name[20];
    int count;
}leader[3]={"li",0,"zhang",0,"sun",0};

int main(){
    int i,j;
    char name[20];
    for(i=0;i<5;i++){
        scanf("%s",name);
        for(j=0;j<3;j++){
            if(strcmp(name,leader[j].name)==0) leader[j].count++;
        }
    }
    for(i=0;i<3;i++){
        printf("%s\t%d\t",leader[i].name,leader[i].count);
    }
}