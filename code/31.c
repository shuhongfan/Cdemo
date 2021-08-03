#include <stdio.h>

int main () {
    float b=35.425,c=52.954;
    int a1=(int)(b*c);
    int a2=(int)c%(int)b;
    printf("a1=%d,a2=%d",a1,a2);
}