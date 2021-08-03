//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    int i,j,k,t,num[10]={1,16,5,98,23,119,18,75,65,81};
    for(i=0;i<9;i++){
        k=i;
        for(j=i+1;j<10;j++){
            if(num[j]<num[k]) k=j;
        }
        if(i!=j){
            t=num[i];
            num[i]=num[k];
            num[k]=t;
        }
    }
    for(i=0;i<10;i++) printf("%d ",num[i]);
}