//
// Created by shuhongfan on 2021/6/14.
//

#include <stdio.h>
int fb(i){
    if(i==1||i==2) return 1;
    return fb(i-1)+fb(i-2);
}
int main(){
    int i,count=0;
    for(i=1;i<=20;i++){
        count++;
        printf("%d\t",fb(i));
        if(count%5==0) printf("\n");
    }

}