#include <stdio.h>

void swap(int *px,int *py){
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}
int main(){
    int x,y;
    int *p1,*p2;
    scanf("%d,%d",&x,&y);
    printf("x=%d,y=%d\n",x,y);
    p1=&x;p2=&y;
    swap(p1,p2);
    printf("x=%d,y=%d\n",x,y);
}