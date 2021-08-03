//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>
#include <math.h>
int main(){
    int g,s,b;
    for(b=1;b<=9;b++){
        for(s=0;s<=9;s++){
            for(g=0;g<=9;g++){
               if(pow(b,3)+ pow(s,3)+ pow(g,3)==b*100+s*10+g){
                   printf("%d%d%d\n",b,s,g);
               }
            }
        }
    }
}