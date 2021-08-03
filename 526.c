//
// Created by shuhongfan on 2021/6/16.
//

#include <stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    switch(x<0){
        case 1:y=-1;break;
        case 0:switch(x>0){
                case 1:y=1;break;
                case 0:y=0;break;
        }
    }
    printf("%d",y);
}