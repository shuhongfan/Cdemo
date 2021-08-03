//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
int main(){
    int k=0;
    char c='A';
    do{
        switch (c++) {
            case 'A':k++;break;
            case 'B':k--;
            case 'C':k+=2;break;
            case 'D':k=k*10;break;
            default:k=k/3;
        }
        k++;
        printf("c=%c\tk=%d\n",c,k);
    } while (c<'G');
    printf("k=%d\n",k);
}