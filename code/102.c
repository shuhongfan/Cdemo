#include <stdio.h>

int main(){
    int n=0;
    float t=0,x;
    scanf("%f",&x);
    while (x!=-1)
    {
        n++;
        t+=x;
        scanf("%f",&x);
    }
    printf("n=%d t=%6.2f pj=%6.2f\n",n,t,t/n);
}