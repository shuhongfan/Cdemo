#include <stdio.h>

int sum(int a,int b,int c){
    return a+b+c;
}
int avg(int a,int b,int c){
    return sum(a,b,c)/3;
}
int min(int a,int b,int c){
    int min=a;
    if(b<min){
        min=b;
    } else if(c<min){
        min=c;
    }
    return min;
}
int max(int a,int b,int c){
    int max=a;
    if(max<b){
        max=b;
    } else if(max<c){
        max=c;
    }
    return max;
}

int main(){
    int a=100,b=80,c=75;
    printf("sum=%d\n",sum(a,b,c));
    printf("avg=%d\n",avg(a,b,c));
    printf("min=%d\n",min(a,b,c));
    printf("max=%d\n",max(a,b,c));
}