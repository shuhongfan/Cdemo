//
// Created by shuhongfan on 2021/5/28.
//

#include <stdio.h>

int main(){
    int i=5;
    do{
        switch(i%2){
            case 4:i--;break;
            case 6:i--;break;
        }
        i--;
        i--;
        printf("%d\t",i);
    } while (i>0);
}