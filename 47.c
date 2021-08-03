#include "stdio.h"
#include "math.h"
int main(){
    int i,j,k,m=0;
    for(i=101;i<=200;i=i+2){
        k=sqrt(i);
        for(j=2;j<=k;j++){
            if(i%j==0) break;
        }
        if(j>=k+1) {
            printf("%d ",i); 
            m=m+1;
        }
        if(m%10==0) printf("\n");
    }
    return 0;
}