//
// Created by shuhongfan on 2021/6/8.
//

#include "stdio.h"

int main(){
    char c;
    int wor=0,dig=0,spa=0,oth=0;
    while((c=getchar())!='#'){
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')) wor++;
        else if(c>='0'&&c<='9') dig++;
        else if(c==' ') spa++;
        else oth++;
    }
    printf("wor=%d,dig=%d,spa=%d,oth=%d",wor,dig,spa,oth);
}