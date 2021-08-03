//
// Created by shuhongfan on 2020/10/30.
//

#include <stdio.h>


void remove_space11(char* ch){
    char str[100]={0};
    char* temp=0;
    int i=0;
    int j=0;
    while (ch[i]!='\0'){
        if (ch[i]!=' '){
            str[j]=ch[i];
            j++;
        }
        i++;
    }
    printf("%s\n",str);
    while (*ch++ = *temp++);
}
void remove_space(char* ch){
//    用来遍历字符串
    char* ftemp=ch;
//    记录非空格字符串
    char* rtemp=ch;
    while (*ftemp){
        if (*ftemp!='\0'){
            *rtemp=*ftemp;
            rtemp++;
        }
        ftemp++;
    }
    printf("%s\n",ftemp);
    *rtemp=0;
}
int main(){
    char ch[]="  h     e  ll          o w  o   r  lld";
    remove_space(ch);
}