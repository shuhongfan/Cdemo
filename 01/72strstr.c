//
// Created by shuhongfan on 2020/10/31.
//

#include <stdio.h>

char* my_strstr(char* src,char* dest){
//    遍历源字符串指针
    char* fsrc=src;
//    记录每次字符串首地址
    char* rsrc=src;
    char* tdest=dest;
    while (*fsrc){
        rsrc=fsrc;
        while (*fsrc==*tdest && *fsrc!='\0'){
            fsrc++;
            tdest++;
        }
        if (*tdest=='\0'){
            return rsrc;
        }
//        回滚
//        目标字符串更新到起始位置
        tdest=dest;
        fsrc=rsrc;
        fsrc++;
    }
    return NULL;
}
int main(){
    char src[]="hello world";
    char dest[]="llo";
    char* p =my_strstr(src,dest);
    printf("%s\n",p);
}