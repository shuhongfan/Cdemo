//
// Created by shuhongfan on 2021/6/16.
//

#include <stdio.h>
int move(int *a){
    int i,j,t;
    for(i=0;i<=3;i++)
        for(j=i;j<3;j++){
            t=*(a+3*i+j);
            *(a+3*i+j)=*(a+3*j+i);
            *(a+3*j+i)=t;
        }
}
int main(){
    int i,j,a[3][3];
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    move(a);
    printf("\nnow\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

}