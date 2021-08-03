//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>
int cp(char *a,char *b,int n){
    int i=0;
    while(i++<n-1) *a++;
    while(*a!='\0') *b++=*a++;
    *b='\0';
}
int main(){
    int n;
    char a[100],b[100];
    gets(a);
    scanf("%d",&n);
    cp(a,b,n);
    puts(b);
}