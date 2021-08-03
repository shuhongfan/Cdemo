#include <stdio.h>

int main(){
    int num1,num2;
    int s;
    printf("输入两个整数:");
    scanf("%d,%d",&num1,&num2);
    s=sum(num1,num2);
    printf("两个数之和为：%d",s);
}

int sum(x,y)
int x,y;
{
    int z;
    z=x+y;
    return(z);
}