//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
int sushu(int num){
    int i;
    for(i=2;i<=num/2;i++){
        if(num%i==0) return 0;
    }
    return 1;
}
int main(){
    int num;
    scanf("%d",&num);
    if(sushu(num)==0) printf("%d no sushu",num);
    else printf("%d yes sushu",num);
}