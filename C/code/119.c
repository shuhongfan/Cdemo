#include <stdio.h>
#include <math.h>

int main(){
    float num;
    int k;
    printf("请输入一个实数：");
    scanf("%f",&num);
    printf("1.输出相反数\n2.输出平方数\n3.输出平方根\n4.退出\n");
    scanf("%d",&k);
    while(k!=4){
        switch(k){
            case 1:num=-num;break;
            case 2:num=pow(num,2);break;
            case 3:num=sqrt(num);break;
            case 4:break;
            default:printf("输入错误请重新输入\n");break;
        }
        printf("num=%f\n",num);
        scanf("%d",&k);
    }
}