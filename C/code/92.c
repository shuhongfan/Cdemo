#include <stdio.h>

int main(){
    float km,m,li;
    printf("请输入公里数：");
    scanf("%f",&km);
    m=km*2;
    li=km*1000;
    printf("%.1f公里=%.2f里=%.2f米",km,m,li);
}