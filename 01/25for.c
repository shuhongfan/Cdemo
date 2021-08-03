//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",i);
    }

//    每次随机数不一样
    srand((unsigned int ) time(NULL));
    
    for (int j = 0; j < 10; ++j) {
//        获取随机数
        int value=rand()%10;
        printf("%d\n",value);
    }

//    猜数字
    int value=rand()%100;
    int num;
    for (;;) {
        printf("请输入数字：\n");
        scanf("%d",&num);
        printf("%d",value);
        if (value>num){
            printf("你输入的数字太小了\n");
        } else if (value<num){
            printf("你输入的数字太大了\n");
        } else{
            printf("你猜对了\n");
            break;
        }
    }
}