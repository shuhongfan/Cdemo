//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int let=0,spa=0,dig=0,oth=0;
    char c;
    while ((c=getchar())!='\n'){
        if(c>='a'&&c<='z'||c>='A'&&c<='Z') let++;
        else if(c==' ') spa++;
        else if(c>='0'&&c<='9') dig++;
        else oth++;
    }
    printf("letter=%d,spa=%d,dig=%d,oth=%d",let,spa,dig,oth);
}