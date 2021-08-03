//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>
int sc(int *a){
    int *i;
    for(i=a;i<a+10;i++)
        scanf("%d",i);
}
int pt(int *a){
    int i;
    for(i=0;i<10;i++)
        printf("%d ",*a++);
}
int max(int *a){
    int i,max=*a;
    for(i=0;i<10;i++){
        if(*a>max)  max=*a;
        *a++;
    }
    return max;
}
int min(int *a){
    int i,min=*a;
    for(i=0;i<10;i++){
        if(*a<min)  min=*a;
        *a++;
    }
    return min;
}
int swap(int *a){
    int i,t,ma=max(a),mi=min(a);
    for(i=0;i<10;i++){
        if(a[i]==ma) {
            t=a[i];
            a[i]=a[9];
            a[9]=t;
        }
        if(a[i]==mi) {
            t=a[i];
            a[i]=a[0];
            a[0]=t;
        }
    }
}
int main(){
    int a[10];
    sc(a);
    swap(a);
    pt(a);
}