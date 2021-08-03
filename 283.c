//
// Created by shuhongfan on 2021/6/4.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct Student_type{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[SIZE];

void save(){
    FILE *fp;
    int i;
    if((fp=fopen("C:\\Users\\shuhongfan\\Desktop\\Cdemo\\a.txt","w"))==NULL){
        printf("error");
        exit(0);
    }
    for(i=0;i<SIZE;i++){
        if(fwrite(&stud[i],sizof(struct Student_type),1,fp)!=1){
            printf("file write error\n");
        }
    }
    fclose(fp);
}

int main(){
    int i;
    for(i=0;i<SIZE;i++){
        scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
    }
    save();
    return 0;
}