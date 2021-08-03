//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
void BubbleSort(int* arr,int len){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<i;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void main(){
    int arr[]={8,1,5,9,2,10,6,3,7,4};
    BubbleSort(arr,10);
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
}