//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int i=0;
    while (i<100){
        if (i%2==0){
            printf("%d\n",i);
        }
        i++;
    }

//    ���´�7��7�ı�����Ҫ������ �����������
    int j=0;
    while (j<100){
//        7�ı���||��λ7||ʮλ7
        if (j%7==0 || j%10==7 || j/10==7){
            printf("������\n");
        } else{
            printf("%d\n",j);
        }
        j++;
    }
}