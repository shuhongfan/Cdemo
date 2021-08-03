#include <stdio.h>

int main(){
    int a,b,n;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    n=min(a,b);
    printf("最小值为：%d",n);
}

min(num1,num2)
int num1,num2;
{
    int m;
    if(num1<num2) m=num1;
    else m=num2;
    // printf("最小值为：%d",m);
    return m;
}