#include <stdio.h>

int main(){
    int m,days;
    printf("�������·�:");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) days=31;
    else if(m==4||m==6||m==9||m==11) days=30;
    else days=29;
    printf("%d�·���%d��",m,days);
}