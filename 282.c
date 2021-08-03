//
// Created by shuhongfan on 2021/6/4.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char str[3][10],temp[10];
    int i,j,k,n=3;
    printf("enter strings:\n");
    for(i=0;i<n;i++) gets(str[i]);
    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(strcmp(str[k],str[j])>0) k=j;
        }
        if(k!=i){
            strcpy(temp,str[k]);
            strcpy(str[k],str[i]);
            strcpy(str[i],temp);
        }
    }
    if((fp=fopen("C:\\Users\\shuhongfan\\Desktop\\Cdemo\\a.txt","w"))==NULL){
        printf("error");
        exit(0);
    }
    for(i=0;i<n;i++){
        fputs(str[i],fp);
        puts(str[i]);
    }
    return 0;
}