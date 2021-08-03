//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>
int main(){
    int i,fb[40]={1,1};
    for(i=2;i<40;i++)
        fb[i]=fb[i-1]+fb[i-2];
    for(i=0;i<40;i++){
        if(i%5==0) printf("\n");
        printf("%d\t\t",fb[i]);
    }

}