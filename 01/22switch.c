//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    switch (score/10) {
        case 10:
            printf("����");
            break;
        case 9:
            printf("����");
            break;
        case 8:
            printf("����");
            break;
        case 7:
            printf("����");
            break;
        case 6:
            printf("����");
            break;
        default:
            printf("������");
    }
}