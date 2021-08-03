//
// Created by shuhongfan on 2021/4/14.
//

#include "stdio.h"
#include "string.h"
void  main(){
    char a[]="That";
    char b[]="The";
    printf("%d\n",strcmp(a,b));

    if(strcmp(a,b)>0){
        printf("%s",a);
    } else{
        printf("%s",b);
    }

}