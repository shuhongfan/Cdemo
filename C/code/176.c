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
        printf("1.求整数n的立方\n2.求整数n的立方根\n3.结束程序\n");
        printf("******************\n");
        printf("请输入数字选择相应功能：");
        scanf("%d",&temp);
        if(temp==1){
            printf("请输入数字n:");
            scanf("%d",&num);
            printf("整数 %d 的立方为：%d\n",num,exe1(num));
        } else if(temp==2){
            printf("请输入数字n:");
            scanf("%d",&num);
            printf("求整数 %d 的立方根为:%d\n",num,exe2(num));
        } else if (temp==3){
            printf("退出成功！\n");
        } else {
            printf("输入错误！！！\n");
        }
    }
}