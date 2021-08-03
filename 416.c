//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>
int jieche(int n){
    int i,p=1;
    for(i=1;i<=n;i++){
        p=p*i;
    }
    return p;
}
int main(){
    int i,sum=0;
    for(i=1;i<=10;i++){
        sum+=jieche(i);
    }
    printf("%d\t",sum);
}