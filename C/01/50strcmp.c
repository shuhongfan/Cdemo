//
// Created by shuhongfan on 2020/10/28.
//

#include <stdio.h>

int strcmp(char ch1[],char ch2[]){
    int i=0;
    while (ch1[i]==ch2[i]){
        if (ch1[i]=='\0'){
            return 0;
        }
        i++;
    }
    return ch1[i]>ch2[i]?1:-1;
}

int main(){
    char ch1[]="hello";
    char ch2[]="hello";
    if (strcmp(ch1,ch2)==0){
        printf("两个字符串相同");
    } else{
        printf("两个字符串不同");
    }

}