#include <stdio.h>

int main(){
    int add(int x,int y);
    int times(int x,int y);
    int sum(int (*f1)(),int (*f2)(),int a,int b);
    int a=10,b=20,c;
    c=sum(add,times,a,b);
    printf("sum=%d\n",c);
}

int add(int x,int y){
    return x+y;
}
int times(int x,int y){
    return x*y;
}
int sum(int (*f1)(),int (*f2)(),int a,int b){
    return (*f1)(a,b)+(*f2)(a,b);
}