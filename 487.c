//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>

int main(){
    char a[100];
    int i,let=0,dig=0,oth=0;
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z') let++;
        else if(a[i]>='0'&&a[i]<='9') dig++;
        else oth++;
    }
    printf("let=%d,dig=%d,oth=%d",let,dig,oth);
}