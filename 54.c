#include <stdio.h>

int main(){
    int sn,i,n,a,temp;
    scanf("%d %d",&a,&n);
    for(i=0;i<n;i++){
        temp=temp*10+a;
        sn=sn+temp;
    }
    printf("%d",sn);
}