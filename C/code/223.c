#include <stdio.h>

void invert(int p[],int n){
    int i,x;
    for(i=0;i<n/2;i++){
        x=p[i];
        p[i]=p[n-1-i];
        p[n-1-i]=x;
    }
}
int main(){
    int i,a[10]={0,1,2,3,4,5,6,7,8,9};
    printf("The Original array:\n");
    for(i=0;i<10;i++){
        printf("%d  ",a[i]);
    }
    invert(a,10);
    printf("\nThe Inverted array:\n");
    for(i=0;i<10;i++){
        printf("%d  ",a[i]);
    }
}