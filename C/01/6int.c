//
// Created by shuhongfan on 2020/10/25.
//

#include <stdio.h>

int main(){
//    �޷��� unsigned
//    �з��� signed ����ʡ��
    unsigned int a=-10;
//    %uռλ�� ��ʾ���һ���޷��ŵ�ʮ������������
    printf("%u\n",a);
    main2();
}

int main2(){
//    ���� ������0-1  �˽���0-1  ʮ������0-9 10-15��a-f��
    int a= 10;
    printf("ʮ���ƣ�%d\n",a);
    printf("�˽��ƣ�%x\n",a);
    printf("ʮ�����ƣ�%o\n",a);

//    ����˽�������
    int b1=0123;
    int b2=0x123;
    printf("%d,%d",b1,b2);
}