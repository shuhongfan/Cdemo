#include <stdio.h>
#include <math.h>
int exe1(int num){
    return pow(num,2);
}
int exe2(int num){
    return sqrt(num);
}
int main(){
    int temp,num;
    while(temp!=3){
        printf("******************\n");
        printf("1.������n������\n2.������n��������\n3.��������\n");
        printf("******************\n");
        printf("����������ѡ����Ӧ���ܣ�");
        scanf("%d",&temp);
        if(temp==1){
            printf("����������n:");
            scanf("%d",&num);
            printf("���� %d ������Ϊ��%d\n",num,exe1(num));
        } else if(temp==2){
            printf("����������n:");
            scanf("%d",&num);
            printf("������ %d ��������Ϊ:%d\n",num,exe2(num));
        } else if (temp==3){
            printf("�˳��ɹ���\n");
        } else {
            printf("������󣡣���\n");
        }
    }
}