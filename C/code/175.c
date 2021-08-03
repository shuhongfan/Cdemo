#include <stdio.h>

int panduan(int num){
    if (num%2==0) return 1;
    else return 0;
}

int main(){
    int num,end;
    scanf("%d",&num);
    end=panduan(num);
    end?printf("Å¼Êı"):printf("ÆæÊı");
}