#include <stdio.h>

int main(){
    int i,j;
    i=100;j=200;
    printf("(i++)+j=%d\n",(i++)+j);
    i=100;j=200;
    printf("i+(++j)=%d\n",i+(++j));
    i=100;j=200;
    printf("i+++j=%d\n",i+++j);
}