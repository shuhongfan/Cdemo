//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main(){
    int a=10;
//    ����ָ����Խ����������͵��ڴ��ַ
    void * p=&a;
//    ��ͨ������ָ���޸ı�����ֵʱ ��Ҫ�ҵ�������Ӧ��ָ������
    *(int*)p=100;
    printf("����ָ�����ڴ�ռ���ֽڴ�С��%d\n",sizeof(void *));
    printf("����ָ�����ڴ�ռ���ֽڴ�С��%d\n",sizeof(void *));
}