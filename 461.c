//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    char letter[3][80];
    int i,j,upp=0,low=0,dig=0,spa=0,oth=0;
    for(i=0;i<3;i++){
        printf("scanf line %d\n",i+1);
        scanf("%s",letter[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<80&&letter[i][j]!='\0';j++){
            if(letter[i][j]>='a'&&letter[i][j]<='z') low++;
            else if(letter[i][j]>='A'&&letter[i][j]<='Z') upp++;
            else if(letter[i][j]>='0'&&letter[i][j]<='9') dig++;
            else if(letter[i][j]==' ') spa++;
            else oth++;
        }
    }
    printf("low=%d,upp=%d,dig=%d,spa=%d",low,upp,dig,spa,oth);
}