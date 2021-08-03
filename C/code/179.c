#include <stdio.h>

int main(){
    int x,y,z,t,m;
    int max();
    scanf("%d,%d,%d",&x,&y,&z);
    t=max(x,y);
    m=max(t,z);
    printf("%d",m);
}

int max(a,b)
int a,b;
{
    if(a>b) return a;
    else return b;
}