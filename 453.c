//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    char a,b,c;
    for(a='x';a<='z';a++){
        for(b='x';b<='z';b++){
            if(a!=b){
                for(c='x';c<='z';c++){
                    if(a!=c&&b!=c){
                        if(a!='x'&&c!='x'&&c!='z')
                            printf("a vs %c\nb vs %c\nc vs %c",a,b,c);
                    }
                }
            }
        }
    }
}