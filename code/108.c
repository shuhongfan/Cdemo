#include <stdio.h>

int  main(){
    int i,s;
    for(i=13;i<=103;i+=10){
        s+=i;    
        printf("i=%d,s=%d\n",i,s);
    }
}