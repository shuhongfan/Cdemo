#include <stdio.h>

int main () {
    float f=111.11111;
    double d=22222.22222222222222;
    printf("%f,%f,%10.2f\n",f,d,f);
    printf("%-10.2f,%010.2f,%.2f\n",f,d,d);
}