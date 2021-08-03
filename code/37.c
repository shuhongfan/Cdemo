#include <stdio.h>

int main () {
    float a=2.5;
    ++a;
    printf("%f\n",a);

    printf("%f\n",8.0/5);

    printf("%d\n",8%5);
    printf("%d\n",8%(-5)); // 符号与被除数相同
    printf("%d\n",-8%5);
    printf("%d\n",-8%(-5));

    printf("5%%3=%d,5%%-3=%d,-5%%3=%d,-5%%-3=%d",5%3,5%-3,-5%3,-5%-3);
}