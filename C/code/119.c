#include <stdio.h>
#include <math.h>

int main(){
    float num;
    int k;
    printf("������һ��ʵ����");
    scanf("%f",&num);
    printf("1.����෴��\n2.���ƽ����\n3.���ƽ����\n4.�˳�\n");
    scanf("%d",&k);
    while(k!=4){
        switch(k){
            case 1:num=-num;break;
            case 2:num=pow(num,2);break;
            case 3:num=sqrt(num);break;
            case 4:break;
            default:printf("�����������������\n");break;
        }
        printf("num=%f\n",num);
        scanf("%d",&k);
    }
}