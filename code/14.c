#include <stdio.h>

int main() {
    char c1,c2,c3,c4;
    c1='a',c2='\x61',c3=0x61,c4=97;
    printf("%c,%c,%c,%c\n",c1,c2,c3,c4);
    printf("%d,%d,%d,%d\n",c1,c2,c3,c4);
}