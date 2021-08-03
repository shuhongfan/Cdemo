#include <stdio.h>
#define R 1
int main(){
    float c,r,s;
    printf("input a number:");
    scanf("%f",&c);
    #ifndef R
        r=3.1415926*c*c;
        printf("area of round is:%f\n",r);
    #else
        s=c*c;
        printf("area of square is:%f\n",s);
    #endif
}