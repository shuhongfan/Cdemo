//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    char word[3][80],i,j,upper=0,lower=0,digit=0,space=0,other=0;
    for(i=0;i<3;i++)
        scanf("%s",word[i]);
    for(i=0;i<3;i++)
        for(j=0;j<80;j++){
            if(word[i][j]>='A'&&word[i][j]<='Z') upper++;
            else if(word[i][j]>='a'&&word[i][j]<='z') lower++;
            else if(word[i][j]>='0'&&word[i][j]<='9') digit++;
            else if(word[i][j]==' ') space++;
            else other++;
        }
    printf("upper=%d,lower=%d,digit=%d,space=%d,other=%d",upper,lower,digit,space,other);
}