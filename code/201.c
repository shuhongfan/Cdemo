#include <stdio.h>
#define PI 3.1415926
#define AREA(x) PI*x*x
int main(){
    float r,s;
    r=2.5;
    s=AREA(r);
    printf("%f\n",s);
}