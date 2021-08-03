#include <stdio.h>

int main(){
    int i=1;
    int a,b;
    a=i++;
    b=++i;
    printf("%d,%d\n",a,b);

    int j=1;
    printf("%d,%d\n",j++,++j);

    int x=2,y=7;
    printf("%d,%d\n",x+y,x-y);

    
}