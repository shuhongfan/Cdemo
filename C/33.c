#include <stdio.h>
int main(){
    float i,money,num1,num2,num4,num6,num10;
    scanf("%f",&i);
    num1=100000*0.1;
    num2=num1+100000*0.075;
    num4=num2+200000*0.05;
    num6=num4+200000*0.03;
    num10=num6+400000*0.015;
    if(i<=100000) money=num1;
    else if(i<=200000) money=num1+(i-100000)*0.075;
    else if(i<=400000) money=num2+(i-200000)*0.05;
    else if(i<=600000) money=num4+(i-400000)*0.03;
    else if(i<=1000000) money=num6+(i-600000)*0.015;
    else money=num10+(i-1000000)*0.01;
    printf("money=%f",money);
    return 0;
}