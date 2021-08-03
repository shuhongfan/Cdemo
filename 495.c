//
// Created by shuhongfan on 2021/6/14.
//

#include <stdio.h>
int main(){
    int i=0,av,sum=0,n;
    scanf("%d",&n);
    while(n!=0){
        i++;
        if(n%2!=0) sum+=n;
        scanf("%d",&n);
    }
    av=sum/i;
    printf("%d",av);
}