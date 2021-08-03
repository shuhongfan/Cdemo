#include <stdio.h>
int main(){
    int a[5]={1,3,5,7,9};
    int *num[5];
    int **p;
    int i;
    for(i=0;i<5;i++){
        num[i]=&a[i];
    }
    for(i=0;i<5;i++){
        p=num+i;
        printf("%d ",**p);
    }
}

