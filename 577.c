//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    char a[3][80];
    int i,j,upp=0,low=0,spa=0,dig=0,oth=0;
    for(i=0;i<3;i++) gets(a[i]);
    for(i=0;i<3;i++){
        for(j=0;a[i][j]!='\0';j++){
            if(a[i][j]>='A'&&a[i][j]<='Z') upp++;
            else if(a[i][j]>='a'&&a[i][j]<='z') low++;
            else if(a[i][j]>='0'&&a[i][j]<='9') dig++;
            else if(a[i][j]==' ') spa++;
            else oth++;
        }
    }
    printf("upp=%d,low=%d,spa=%d,dig=%d,oth=%d",upp,low,spa,dig,oth);
}