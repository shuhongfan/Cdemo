#include <stdio.h>
#include <math.h>

int main(){
    int R;
    float V;
    for(R=1;R<=100;R+=2){
        V=4.0/3.0*M_PI*pow(R,3);
        printf("R=%2d,V=%.2f\n",R,V);
    }
}