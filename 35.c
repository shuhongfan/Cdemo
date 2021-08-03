#include "stdio.h"

int main(){
    int n1,n2,n3,n4,t;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    if(n1>n2){
        t=n1;n1=n2;n2=t;
    }
    if(n1>n3){
        t=n1;n1=n3;n3=t;
    }
    if(n1>n4){
        t=n1;n1=n4;n4=t;
    }
    if(n2>n3){
        t=n2;n2=n3;n3=t;
    }
    if(n2>n4){
        t=n2;n2=n4;n4=t;
    }
    if(n3>n4){
        t=n3;n3=n4;n4=t;
    }
    printf("%d %d %d %d",n1,n2,n3,n4);
    return 0;
}