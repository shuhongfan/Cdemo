//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
void main(){
    int i,j,arr[]={8,1,5,9,2,10,6,3,7,4};
    for(i=0;i<10;i++){
        for(j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    printf("%d\t",arr[i]);
}