#include <stdio.h>

int main(){
    void move(int *p);
    int i,j,a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    move(&a[0][0]);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
            if(j==2) printf("\n");
        }
    }
}
void move(int *p){
    int i,j,t;
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            t=*(p+3*i+j);
            *(p+3*i+j)=*(p+3*j+i);
            *(p+3*j+i)=t;
        }
    }
}