#include <stdio.h>

int main(){
    int a[4][6]={{1,2,3,4,5,6},{1,4,7,5,6,2},{1,4,5,6,8,9},{2,5,6,7,8,4}};
    int max=a[0][0],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    printf("MAX=%d",max);
}