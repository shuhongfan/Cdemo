#include <stdio.h>

int main(){
    int a[5]={10,13,2,16,3};
    int i;
    printf("����a�и�Ԫ�ص�ֵ�ֱ�Ϊ��");
    for(i=0;i<5;i++) printf("%5d",a[i]);
    printf("\n");
    printf("�����������a�и�Ԫ��ֵ��");
    for(i=4;i>=0;i--) printf("%5d",a[i]);
    printf("\n");
}