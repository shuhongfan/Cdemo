#include <stdio.h>

int main(){
    int x=20,y;
    y=2<x<10;
    printf("x=%d\n",x);
    printf("2<x<10��ֵΪ:%d\n",y);
    y=2<x&&x<10;
    printf("2<x&&x<10��ֵΪ��%d\n",y);
}