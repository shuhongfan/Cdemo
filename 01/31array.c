//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>
#define SIZE 10

int main(){
    int arr[]={1,2,3,4,5,6,7};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        printf("%d\n",i);
    }

    int arr1[10]={1};
    for (int j = 0; j < sizeof(arr1)/sizeof(arr1[0]); ++j) {
        printf("%d\n",arr1[j]);
    }

    int arr2[SIZE];
    for (int k = 0; k < SIZE; ++k) {
        scanf("%d",&arr2[k]);
    }
    for (int l = 0; l < SIZE; ++l) {
        printf("%d\n",arr2[l]);
    }
}