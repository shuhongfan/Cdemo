#include <stdio.h>

int main() {
    int i,num[5]={1,2,3,4,5};
    f(num);
    for(i=0;i<5;i++) printf("num[%d]=%d\n",i,num[i]);
}

f(a)
int a[];
{
    int i;
    for(i=0;i<5;i++){
        a[i]+=1;
    }
}