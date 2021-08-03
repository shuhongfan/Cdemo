//
// Created by shuhongfan on 2020/10/25.
//
#include <stdio.h>
#include <stdlib.h>

int main(){
//    cmd命令
//    calc计数器
//    notepad记事本
//    mspaint画图板
//system()可以打开一个外部的应用程序
//如果带路径需要使用\\ 或者 /
//    system("calc");
    int value;
//    value = system('C:\\"Program Files (x86)"\\Tencent\\QQ\\Bin\\QQScLauncher.exe');
    value = system("calc");
    printf("%d\n", value);
    return 0;
}