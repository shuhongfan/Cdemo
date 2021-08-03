//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
int so(int str[][3]){
    int i,j,temp;
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            temp=str[i][j];
            str[i][j]=str[j][i];
            str[j][i]=temp;
        }
    }
}
int main(){
    int str[3][3]={1,2,3,4,5,6,7,8,9},i,j;
    so(str);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",str[i][j]);
        }
        printf("\n");
    }
    return 0;
}