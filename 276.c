//
// Created by shuhongfan on 2021/6/3.
//

#include <stdio.h>
#include <string.h>

struct person{
    char name[20];
    int count;
}leader[3]={"Li",0,"Zhang",0,"Sum",0};

int main(){
    int i,j;
    char leader_name[20];
    for(i=1;i<=10;i++){
        scanf("%s",leader_name);
        for(j=0;j<3;j++){
            if(strcmp(leader_name,leader[j].name)==0) leader[j].count++;
        }
    }
    for(i=0;i<3;i++)
        printf("%5s:%d\n",leader[i].name,leader[i].count);
}