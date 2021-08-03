#include <stdio.h>

int main(){
    float x=654.321;
    printf("%e,%10e,%10.2e,%.2e,%-10.2e\n",x,x,x,x,x);

    float y=654.321;
    printf("%f,%e,%g",y,y,y);
}