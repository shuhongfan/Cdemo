//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"

//交换
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
//冒泡排序
void BubbleSort(int a[],int n){
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n-1-i;j++)
            if(a[j+1]<a[j])
                swap(a,j+1,j);
}
//选择排序
void SelectSort(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        int minIndex=i;
        for(j=i;j<n;j++){
            if(a[j]<a[minIndex])
                minIndex=j;
        }
        swap(a,minIndex,i);
    }
}
void main(){
    char arr[]={11,3,8,6};
    puts(arr);
    BubbleSort(arr,4);
    puts(arr);
}