//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int let=0,spa=0,dig=0,oth=0;
    char c;
    while((c=getchar())!='\n'){
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')) let++;
        else if(c==' ') spa++;
        else if(c>='0'&&c<='9') dig++;
        else oth++;
    }
    printf("let=%d\nspa=%d\ndig=%d\noth=%d",let,spa,dig,oth);
}