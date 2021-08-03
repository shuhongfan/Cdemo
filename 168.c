#include <stdio.h>

int main(){
    void inv(int x[],int n);
    int i,a[10]={3,7,9,11,0,6,7,5,4,2};
    // for(i=0;i<10;i++) printf("%d",a[i]);
    inv(a,10);
    for(i=0;i<10;i++) printf("%d ",a[i]);
    return 0;
}
// void inv(int x[],int n){
//     int temp,i,j,m=(n-1)/2;
//     for(i=0;i<=m;i++){
//         j=n-1-i;
//         temp=x[i];
//         x[i]=x[j];
//         x[j]=temp;
//     }
// }
void inv(int *x,int n){
    int *p,temp,*i,*j,m=(n-1)/2;
    i=x;
    j=x+n-1;
    p=x+m;
    while(i<=p){
        temp=*i;
        *i=*j;
        *j=temp;
        i++;
        j--;
    }
}