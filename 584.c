//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>
int sort(int a[3][3]){
    int i,j,t;
    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++){
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
}
int main(){
    int i,j,a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    sort(a);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}