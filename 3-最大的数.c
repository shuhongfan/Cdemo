#include "stdio.h"
int max(int a,int b,int c){
    int max=a;
    if(b>max) max=b;
    else if(c>max) max=c;
    return max;
}
int main(){
    int a,b,c,m;
    scanf("%d,%d,%d",&a,&b,&c);
    m=max(a,b,c);
    printf("max=%d",m);
    return 0;
}