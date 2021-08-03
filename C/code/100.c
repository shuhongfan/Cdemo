#include <stdio.h>

int main(){
    int num,i,tag;
    for(num=3;num<=100;num++){
        for(i=2;i<num;i++){
            if(num%i==0) {tag=0;break;}
            tag=1;
        }
        if (tag) printf("%d ",num);
    }
}