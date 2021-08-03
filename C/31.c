#include <stdio.h>

int main(){
    float num;
    char grade;
    scanf("%f",&num);
    while (num>100||num<0)
    {
        printf("\n输入错误，请重新输入");
        scanf("%f",&num);
    }
    switch((int)(num/10)){
        case 10:
        case 9:grade='A';break;
        case 8:grade='B';break;
        case 7:grade='c';break;
        case 6:grade='d';break;
        default:grade='E';break;
    }
    printf("%c",grade);
}