#include <stdio.h>

int main(){
    float cost,percent,c;
    printf("请输入商品的原价（单价：元）");
    scanf("%f",&cost);
    printf("请输入折扣率：");
    scanf("%f",&percent);
    c=cost*percent;
    printf("实际售价为：%.2f 元",c);
}