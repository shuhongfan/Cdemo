#include <stdio.h>

int main(){
    float cost,percent,c;
    printf("��������Ʒ��ԭ�ۣ����ۣ�Ԫ��");
    scanf("%f",&cost);
    printf("�������ۿ��ʣ�");
    scanf("%f",&percent);
    c=cost*percent;
    printf("ʵ���ۼ�Ϊ��%.2f Ԫ",c);
}