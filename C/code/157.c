#include <stdio.h>

int main(){
    int num1,num2;
    int s;
    printf("������������:");
    scanf("%d,%d",&num1,&num2);
    s=sum(num1,num2);
    printf("������֮��Ϊ��%d",s);
}

int sum(x,y)
int x,y;
{
    int z;
    z=x+y;
    return(z);
}