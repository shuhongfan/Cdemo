#include <stdio.h>

int main(){
    int grade;
    printf("������ɼ�:");
    scanf("%d",&grade);
    grade=grade/10;
    switch(grade){
        case 10:
        case 9:printf("�ȼ�Ϊ A");break;
        case 8:printf("�ȼ�Ϊ B");break;
        case 7:printf("�ȼ�Ϊ C");break;
        case 6:printf("�ȼ�Ϊ D");break;
        default:printf("�ȼ�Ϊ E");break;
    }
}