#include "stdio.h"

int main(){
    int i,j,min,temp,a[10];
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<9;i++){
        min=i;
        for(j=i+1;j<10;j++){
            if(a[min]>a[j]) min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(i=0;i<10;i++) printf("%d ",a[i]);
}

// 1 16 5 98 11 23 119 18 75 65 81