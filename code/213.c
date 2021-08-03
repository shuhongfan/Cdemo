#include <stdio.h>

int main(){
    int a1,a2,x,*p1,*p2;
    scanf("%d,%d",&a1,&a2);
    p1=&a1;p2=&a2;
    if(*p1<*p2){
        x=*p1;*p1=*p2;*p2=x;
    }
    printf("a1=%d,a2=%d\n",a1,a2);
    printf("MAX=%d,MIN=%d\n",*p1,*p2);
}