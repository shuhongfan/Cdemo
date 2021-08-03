#include <stdio.h>

int main(){
    int i,j,t,count=0;
    for(i=2;i<=100;i++){
        t=1;
        for(j=2;j<i;j++) if(i%j==0) t=0;
        if(t==1) {printf("%3d",i);++count;}
        if(count==8) {printf("\n");count=0;}
    }
}