#include <stdio.h>
#include <math.h>

int main(){
    int s;
    float n=1.0,t=1,pi=0;
    while(fabs(t)>1e-6){
        pi=pi+t;
        n=n+2;
        s=-s;
        t=s/n;
    }
    pi=pi*4;
    printf("PI=%10.6f\n",pi);
}