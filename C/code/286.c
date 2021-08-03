//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void main(){
    int i,j,row=0,colum=0,max;
    int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
    max=a[0][0];
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(a[i][j]>max){
                max=a[i][j];
                row=i;
                colum=j;
            }
        }
    }
    printf("max=%d\nrow=%d\ncolum=%d\n",max,row,colum);
}