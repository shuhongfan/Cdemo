#include <stdio.h>

int main(){
    int a=3;
    printf("a=%d\n",a);
    change(a);
    printf("a=%d",a);
}

change(int x){
    x+=10;
    printf("x=%d\n",x);
}