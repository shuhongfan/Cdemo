//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    if (score>700){
        printf("��Ҫ���廪\n");
        if (score>720){
            printf("��Ҫѧϰ�����\n");
        } else if (score>710){
            printf("��Ҫѧϰ�ھ��\n");
        } else{
            printf("��Ҫѧϰ��Ĺ\n");
        }
    } else if (score>680){
        printf("��Ҫ�ϱ���\n");
    } else{
        printf("��Ҫ�ϴ��ǲ���\n");
    }
}