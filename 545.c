//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    float score;
    scanf("%f",&score);
    while(score<0||score>100){
        printf("try again!\n");
        scanf("%f",&score);
    }
    switch ((int)score/10) {
        case 10:
        case 9:printf("A");break;
        case 8:printf("B");break;
        case 7:printf("C");break;
        case 6:printf("D");break;
        default:printf("E");break;
    }
}