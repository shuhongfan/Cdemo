//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int m,i,sum=0;
    for(m=2;m<1000;m++){
        sum=0;
        for(i=1;i<m;i++)
            if(m%i==0) sum+=i;
        if(sum==m){
            printf("%d its factor are ",m);
            for(i=1;i<m;i++)
                if(m%i==0) printf("%d ",i);
            printf("\n");
        }
    }
}