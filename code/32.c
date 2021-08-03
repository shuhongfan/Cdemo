#include <stdio.h>
#include <math.h>

float zhouchang(int r){
    return 2*M_PI*r;
}
float mianji(int r){
    return M_PI*pow(r,2);
}
float tiji(int r,int h){
    return mianji(r)*h;
} 

int main(){
    int r=15,h=3;
    printf("zhouchang=%.2f,mianji=%.2f,tiji=%.2f",zhouchang(r),mianji(r),tiji(r,h));
}

