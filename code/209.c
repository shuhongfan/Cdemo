#include <stdio.h>
#define YS(x,y) ((x)%(y))
int main(){
    int i,j;
    scanf("%d,%d",&i,&j);
    printf("%d",YS(i,j));
}