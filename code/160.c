#include <stdio.h>

int main(){
    int a,b,n;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    n=min(a,b);
    printf("��СֵΪ��%d",n);
}

min(num1,num2)
int num1,num2;
{
    int m;
    if(num1<num2) m=num1;
    else m=num2;
    // printf("��СֵΪ��%d",m);
    return m;
}