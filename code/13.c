#include <stdio.h>

int main() {
    char c1,c2;
    c1='A',c2='B';
    c1=c1+32,c2=c2+32;
    printf("%c,%d\n",c1,c1);
    printf("%c,%d\n",c2,c2);
}