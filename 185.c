#include <stdio.h>

int main(){
    int max(int,int);
    int (*p)(int,int);
    int a,b,c;
    p=max;
    scanf("%d %d",&a,&b);
    c=(*p)(a,b);
    printf("a=%d,b=%d,max=%d",a,b,c);
    return 0;
}

int max(int x,int y){
    int z;
    if(x>y) z=x;
    else z=y;
    return z;
}