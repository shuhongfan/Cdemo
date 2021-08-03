//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    switch (score/10) {
        case 10:
            printf("优秀");
            break;
        case 9:
            printf("优秀");
            break;
        case 8:
            printf("良好");
            break;
        case 7:
            printf("及格");
            break;
        case 6:
            printf("及格");
            break;
        default:
            printf("不及格");
    }
}