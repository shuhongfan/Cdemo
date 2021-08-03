//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",arr[-1]);

    for (int i = 0; i < 20; ++i) {
        printf("%d\n",arr[i]);
    }
}