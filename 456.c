//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    int a[3][3],i,j,s=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j||(i==2-j&&i!=j)) s+=a[i][j];
        }
    }
    printf("%d",s);
}