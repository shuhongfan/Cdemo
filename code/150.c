#include <stdio.h>

int main(){
    int a[10]={89,67,100,64,76,90,94,52,82,90};
    int num,i;
    printf("������Ҫ���ҵ�����");
    scanf("%d",&num);
    for(i=0;i<10;i++) if (a[i]==num) break;
    if(i<10) printf("%d���������ֵĵ�%d��λ��",num,i+1);
    else printf("%d������������");
}