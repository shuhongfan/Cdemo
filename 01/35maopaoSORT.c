//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>
#define SIZE 10
int main(){
    int arr[]={9,1,5,7,2,10,8,4,6,3};

    for (int i = 0; i < SIZE-1; i++) {
        for (int j = 0; j < SIZE-1-i; j++) {
            if (arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int k = 0; k < SIZE; ++k) {
        printf("%d\n",arr[k]);
    }
}