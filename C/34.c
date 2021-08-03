#include "stdio.h"

int main(){
    float i,money,m1,m2,m4,m6,m10,branch;
    scanf("%f",&i);
    m1=100000*0.1;
    m2=m1+100000*0.075;
    m4=m2+200000*0.05;
    m6=m4+200000*0.03;
    m10=m6+400000*0.015;
    branch=i/100000;
    if(branch>10) branch=10;
    switch((int)branch){
        case 0:money=i*0.1;break;
        case 1:money=m1+(i-100000)*0.75;break;
        case 2:
        case 3:money=m2+(i-200000)*0.05;break;
        case 4:
        case 5:money=m4+(i-400000)*0.03;break;
        case 6:
        case 7:
        case 8:
        case 9:money=m6+(i-600000)*0.015;break;
        case 10:money=m10+(i-1000000)*0.001;break;
    }
    printf("%f",money);
    return 0;
}