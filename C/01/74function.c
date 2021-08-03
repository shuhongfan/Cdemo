//
// Created by shuhongfan on 2020/11/3.
//

#include <stdio.h>

//int my_strlen(char* ch){
//    int i=0;
//    while (ch[i]){
//        i++;
//    }
//    return i;
//}
int my_strlen(char* ch){
    char* temp=ch;
    while (*temp!='\0') temp++;
    return temp-ch;
}
int main(){
    char ch[]="hello world";
    printf("%s\n",ch);

    int len=my_strlen(ch);
    printf("%d\n",len);
}