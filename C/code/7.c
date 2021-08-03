#include <stdio.h>

int main(){
    int x=123,y=0123,z=0x123;
    printf("%d %d %d\n",x,y,z);
    printf("%o %o %o\n",x,y,z);
    printf("%x %x %x\n",x,y,z);
}
