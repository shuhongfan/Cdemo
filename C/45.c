#include "stdio.h"

int main(){
    int i,num;
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0) break;
    }
    if(i<num) printf("%d is not a prime number",num);
    else printf("%d is a prime number",num);
}