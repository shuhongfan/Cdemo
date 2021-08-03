#include "stdio.h"

int main(){
    int i,j,min,temp,a[10];
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    for(i=0;i<9;i++){
        min=i;
        for(j=i+1;j<10;j++){
            if(a[j]<a[min]) min=j; 
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(i=0;i<10;i++) printf("%d ",a[i]);
}