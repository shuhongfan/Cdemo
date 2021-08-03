//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,j,num[10]={1,2,3,4,5,6,7,8,9,10},t;
    for(i=0;i<10-1;i++){
        for(j=0;j<10-1-i;j++){
            if(num[j]<num[j+1]){
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    }
    for(i=0;i<10;i++) printf("%d\t",num[i]);
}