#include <stdio.h>

int main () {
    int j=2;
    printf("j=%d,(j++)+(j++)+(j++)=%d\n",j,(j++)+(j++)+(j++));
    
    int k=2;
    printf("k=%d,(++k)+(++k)+(++k)=%d\n",k,(++k)+(++k)+(++k));

    int i=3,m=2;
    printf("i+++m=%d,i=%d,m=%d\n",i+++m,i,m);
}