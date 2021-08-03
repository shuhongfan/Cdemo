#include <stdio.h>

int main(){
    int x,y;
    x=y=0;
    while (x<100)
    {
       ++x;++x;
       y+=x;
    }
    printf("2+4+6+8+....+100=%d",y);
}