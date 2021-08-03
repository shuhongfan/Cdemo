#include <stdio.h>

int main(){
    int grade;
    printf("请输入成绩:");
    scanf("%d",&grade);
    grade=grade/10;
    switch(grade){
        case 10:
        case 9:printf("等级为 A");break;
        case 8:printf("等级为 B");break;
        case 7:printf("等级为 C");break;
        case 6:printf("等级为 D");break;
        default:printf("等级为 E");break;
    }
}