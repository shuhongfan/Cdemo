#include <stdio.h>

int main(){
    int grade,n1,n2;
    n1=n2=0;
    printf("����һ��ѧ���ĳɼ���\n");
    scanf("%d",&grade);
    while(grade!=-1){
        if(grade>=60) n1++;
        else n2++;
        scanf("%d",&grade);
    }
    printf("��������Ϊ��%d\n����������Ϊ��%d",n1,n2);
}