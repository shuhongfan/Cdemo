//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    float grade;
    char price;
    printf("������ٷ��Ƴɼ���");
    scanf("%f",&grade);
    if (grade>100) printf("����ɼ�����");
    else if (grade>=90) price='A';
    else if(grade>=80) price='B';
    else if(grade>=70) price='C';
    else if(grade>=60) price='D';
    else price='E';
    printf("��λѧ���ĳɼ�Ϊ %.2f,�ɼ��ȼ�Ϊ��%c",grade,price);
}