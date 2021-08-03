//
// Created by shuhongfan on 2020/10/27.
//
#include <stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int j=sizeof(arr)/sizeof(arr[0])-1;

    while (i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;
    }
    for (int k = 0; k < 10; ++k) {
        printf("%d\n",arr[k]);
    }
}
