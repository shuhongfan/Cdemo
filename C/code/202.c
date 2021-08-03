#include <stdio.h>

#define AREA(x) ((x)*(x))
int main(){
    printf("AREA=%5.1f\n",27/AREA(3.0));
    printf("AREA=%5.1f\n",27/AREA(1.0+2.0));
}