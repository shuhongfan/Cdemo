#include <stdio.h>

int main(){
    void swap(int *a,int *b);
    int a,b,c;
    int *a1,*a2,*a3;
    scanf("%d %d %d",&a,&b,&c);
    a1=&a;
    a2=&b;
    a3=&c;
    if(a>b) swap(a1,a2);
    if(a>c) swap(a1,a3);
    if(b>c) swap(a2,a3);
    printf("%d %d %d",a,b,c);
}
void swap(int *a,int *b){
    int t;
    t=*a;*a=*b;*b=t;
}