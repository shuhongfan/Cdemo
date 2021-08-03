#include "stdio.h"

int main(){
    int a[3][3],sum=0;
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j||2-i==j)
                sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}
// 1 2 3 4 5 6 7 8 9