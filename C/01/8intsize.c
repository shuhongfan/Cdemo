//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int a=10;
//    ������
    short b=20;
//    ������
    long c=30;
//    ��������
    long long d=40;


    printf("%d\n",a);
//    ������
    printf("%hd\n",b);
//    ������
    printf("%ld\n",c);
//    ��������
    printf("%lld\n",d);

    unsigned int len=sizeof(a);
    printf("���ͣ�%d\n",sizeof(a));
    printf("�����ͣ�%d\n",sizeof(b));
    printf("�����ͣ�%d\n",sizeof(c));
    printf("�������ͣ�%d\n",sizeof(d));

    return 0;
}