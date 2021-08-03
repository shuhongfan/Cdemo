//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>
#include <string.h>
int find(char a[],char longest[]){
    int i,flag=1,count=0,lo=0,po=0;
    for(i=0;i<=strlen(a);i++){
        if(a[i]==' '||a[i]=='\0') {
            flag=0;
            if(lo<count) {
                lo=count;
                po=i-count;
            }
            count=0;
        }else flag=1;
        if(flag==1) count++;
    }
    i=0;
    while(a[po]!=' ') {
        longest[i]=a[po];
        i++;
        po++;
    }
    longest[i]='\0';
}
int main(){
    char a[100],longest[100];
    gets(a);
    find(a,longest);
    puts(longest);
}