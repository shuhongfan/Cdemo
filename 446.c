//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int i,j,s=0;
    for(i=2;i<1000;i++){
        s=0;
        for(j=1;j<i;j++)
            if(i%j==0) s+=j;
            if(s==i){
                printf("%d its factors are ",i);
                for(j=1;j<i;j++)
                    if(i%j==0) printf("%d ",j);
                printf("\n");
            }
    }
}