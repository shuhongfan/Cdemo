//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    char letter[3][80];
    int upp=0,low=0,num=0,spa=0,oth=0,i,j;
    for(i=0;i<3;i++) gets(letter[i]);
    for(i=0;i<3;i++){
        for(j=0;j<80&&letter[i][j]!='\0';j++){
            if(letter[i][j]>='A'&&letter[i][j]<='Z') upp++;
            else if(letter[i][j]>='a'&&letter[i][j]<='z') low++;
            else if(letter[i][j]>='0'&&letter[i][j]<='9') num++;
            else if(letter[i][j]==' ') spa++;
            else oth++;
        }
    }
    printf("upp=%d,low=%d,num=%d,spa=%d,oth=%d",upp,low,num,spa,oth);
}