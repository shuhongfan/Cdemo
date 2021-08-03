//
// Created by shuhongfan on 2020/10/25.
//

#include <stdio.h>

int main(){
//    无符号 unsigned
//    有符号 signed 可以省略
    unsigned int a=-10;
//    %u占位符 表示输出一个无符号的十进制整形数据
    printf("%u\n",a);
    main2();
}

int main2(){
//    进制 二进制0-1  八进制0-1  十六进制0-9 10-15（a-f）
    int a= 10;
    printf("十进制：%d\n",a);
    printf("八进制：%x\n",a);
    printf("十六进制：%o\n",a);

//    定义八进制数据
    int b1=0123;
    int b2=0x123;
    printf("%d,%d",b1,b2);
}