#include <stdio.h>

int main(){
    int i=1,sum=0;
    loop:sum+=i;

    i++;
    if (i<=100) goto loop;
    else printf("1+2+3+....+100=%d",sum);
}