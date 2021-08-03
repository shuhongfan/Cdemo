#include <stdio.h>

int main(){
    float fa,ce;
    fa=-10;
    while (fa<=200)
    {   
        ce=5.0/9.0*(fa-32.0);
        printf("%4.0f  %6.1f\n",fa,ce);
        fa+=30;
    }
    
}