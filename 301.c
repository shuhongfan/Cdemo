//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
int cp(char *a,char *b){
    int m=11,n1=4,n2=16;
    a=a+m;
    b=b+n1;
    while(n1<=n2){
        *a++=*b++;
        n1++;
    }
    *a='\0';
}
int main(){
    char a[50]="My name is Li jilin",b[50]="Mr.Zhang Haoling is very happy";
    cp(a,b);
    puts(a);
}