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

//    ÿ���������һ��
    srand((unsigned int ) time(NULL));
    
    for (int j = 0; j < 10; ++j) {
//        ��ȡ�����
        int value=rand()%10;
        printf("%d\n",value);
    }

//    ������
    int value=rand()%100;
    int num;
    for (;;) {
        printf("���������֣�\n");
        scanf("%d",&num);
        printf("%d",value);
        if (value>num){
            printf("�����������̫С��\n");
        } else if (value<num){
            printf("�����������̫����\n");
        } else{
            printf("��¶���\n");
            break;
        }
    }
}