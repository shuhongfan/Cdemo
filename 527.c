//
// Created by shuhongfan on 2021/6/16.
//

#include <stdio.h>

int main(){
    int s,x;
    scanf("%d",&s);
    switch(s>0&&s<=10){
        case 1:switch (s>=3&&s<=6) {
                case 1:x=2;break;
                case 0:switch (s>1||s>8) {
                        case 1:x=3;break;
                        case 0:x=1;break;
                    }
            }
        case 0: x=0;break;
    }
}