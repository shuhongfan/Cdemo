//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void bubbleSort(int *arr,int n){
//    for(int i=0;i<n-1;i++){
//        for(int j=0;j<n-i-1;j++)
//            if(arr[j]>arr[j+1]){
//                int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//            }
//    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
}
void main(){
    int arr[]={10,6,5,2,3,8,7,4,9,1};
    int n= sizeof (arr)/4;
    for(int j=0;j<n;j++)
        printf("%d ",arr[j]);
    printf("\n");

    bubbleSort(arr,n);
    for(int j=0;j<n;j++)
        printf("%d ",arr[j]);
}