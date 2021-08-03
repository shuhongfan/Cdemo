#include <stdio.h>
#define MIN(x,y) (x)<(y)?(x):(y)
int main(){
    int i,j,k;
    i=5;j=30;
    k=100*MIN(i,j);
    printf("%d\n",k);
}