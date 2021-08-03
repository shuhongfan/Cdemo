//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    if (score>700){
        printf("我要上清华\n");
        if (score>720){
            printf("我要学习计算机\n");
        } else if (score>710){
            printf("我要学习挖掘机\n");
        } else{
            printf("我要学习盗墓\n");
        }
    } else if (score>680){
        printf("我要上北大\n");
    } else{
        printf("我要上传智播客\n");
    }
}