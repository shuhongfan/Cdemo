#include <stdio.h>

int fnc(num)
int num;
{   
    int f;
    if(num<0) printf("error");
    else if(num==0||num==1) f=1;
    else f=fnc(num-1)*num;
    return f;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d,%d",num,fnc(num));
}