//
// Created by shuhongfan on 2020/10/28.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
//    双色球 6个红球 1-32  1个篮球 1-16
    srand((unsigned int)time(NULL));

    int arr[6]={0};
    int value=0;
    int flag=0;
    int j;
    for (int i = 0; i < 6; i++) {
        value=rand()%32+1;
//        去重
        for (j = 0; j < flag; j++) {
            if (value==arr[j]){
                i--;
                break;
            }
        }
        if (j==flag){
            arr[flag]=value;
            flag++;
        }
    }
    for (int i = 0; i < 6; ++i) {
        printf("%d ",arr[i]);
    }
    printf("+ %d\n",rand()%16 + 1);
}