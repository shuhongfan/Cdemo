#include <stdio.h>

int main(){
    int ascii,put();
    printf("ÊäÈëASCIIÂëµÄÖµ:");
    scanf("%d",&ascii);
    put(ascii);
}
put(n)
int n;
{
    int i,a;
    for(i=1;i<=10;i++){
        a=n+i-1;
        putchar(a);
    }
}