#include "stdio.h"

int main(){
    float add(float x,float y);
    float a,b,c;
    scanf("%d,%d",&a,&b);
    c=add(a,b);
    printf("sum=%f\n",c);
    return 0;
}

float add(float x,float y){
    float z;
    z=x+y;
    return(z);
}